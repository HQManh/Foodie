const fs=require("fs");
function edit(f,pairs){let s=fs.readFileSync(f,"utf8");for(const [a,b] of pairs){if(!s.includes(a)){console.log("MISS",f,JSON.stringify(a).slice(0,80));continue;}s=s.split(a).join(b);}fs.writeFileSync(f,s);console.log("ok",f);}
edit("Autoplay/CookingBotBridge.cs",[
 ["CookingNodeAsset asset = dish?.root?.asset as CookingNodeAsset;","CompositeNodeAsset asset = dish?.root?.asset as CompositeNodeAsset;"],
 ["result.orderable = dish.root.asset as CookingNodeAsset;","result.orderable = dish.root.asset as CompositeNodeAsset;"]]);
edit("Autoplay/CookingBotRunner.cs",[
 ["System.Collections.Generic.IEnumerable<string> characterIds = null;","System.Collections.Generic.IReadOnlyList<string> characterIds = null;"],
 ["_bot.ResolveWorkWaitStrategy()","default(CookingBotWorkWaitStrategy) /* ResolveWorkWaitStrategy is not defined on CookingEstimatorBot; default used */"]]);
edit("IceCreamOrderStrategy.cs",[
 ["\t\t\t\t\tforeach (int piece in pieceSet)\r\n\t\t\t\t\t{\r\n\t\t\t\t\t\ttempPieces.Add(piece);","\t\t\t\t\tforeach (var (kind, kindCount) in pieceSet)\r\n\t\t\t\t\t{\r\n\t\t\t\t\t\tfor (int n = 0; n < kindCount; n++) tempPieces.Add(kind);"],
 ["return new OrderSpec[] { new OrderSpec(encodedOrder, dishKey, pieces) };","PieceSet pieceSet = PieceSet.Empty;\r\n\t\t\t\tforeach (int p in pieces) pieceSet = pieceSet.Add(p);\r\n\t\t\t\treturn new OrderSpec[] { new OrderSpec(encodedOrder, dishKey, pieceSet, pieces.Count > 0) };"],
 ["GetIdPieceOffer(item.Id)","GetIdPieceOffer(item.GetId())"]]);
edit("IceCreamPieceTable.cs",[
 ["\t\t\tforeach (int piece in pieces)\r\n\t\t\t{\r\n\t\t\t\tif (Contains(table, (IceCreamPiece)piece))\r\n\t\t\t\t{\r\n\t\t\t\t\tcount++;","\t\t\tforeach (var (kind, kindCount) in pieces)\r\n\t\t\t{\r\n\t\t\t\tif (Contains(table, (IceCreamPiece)kind))\r\n\t\t\t\t{\r\n\t\t\t\t\tcount += kindCount;"],
 ["return new PieceSet((int)piece);","return PieceSet.One((int)piece);"]]);
edit("LevelInfo.cs",[["float speed = ToolUpgradeStat.ApplySpeed(1f / baseDuration, stat);","float speed = stat.ApplySpeed(1f / baseDuration); // original static two-argument overload not present; instance overload used"]]);
