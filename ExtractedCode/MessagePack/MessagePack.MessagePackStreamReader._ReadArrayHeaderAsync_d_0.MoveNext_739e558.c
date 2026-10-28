// rea decompile_all
// name: MessagePack.MessagePackStreamReader.<ReadArrayHeaderAsync>d__0$$MoveNext
// address: 0x739e558
// body: available
// range: 0x739e558-0x739e663 inclusive
// range: 0x739e66c-0x739e783 inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x739e660 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x739e6cc to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x739e77c to 0x3f5c414 FUN_03f5c414 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x739e780 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void MessagePack_MessagePackStreamReader_<ReadArrayHeaderAsync>d__0__MoveNext(int *param_1)

{
  ulong uVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  undefined1 auVar6 [16];
  undefined1 local_50 [16];
  undefined4 local_34;
  
  if ((DAT_09520b3f & 1) == 0) {
    FUN_03f5c2a4(&DAT_0919a230);
    FUN_03f5c2a4(&DAT_0919a288);
    FUN_03f5c2a4(&DAT_09182348);
    FUN_03f5c2a4(&DAT_0919b908);
    FUN_03f5c2a4(&DAT_0919b9d8);
    FUN_03f5c2a4(&DAT_0919b9e0);
    FUN_03f5c2a4(&DAT_091bcba0);
    DAT_09520b3f = 1;
  }
  lVar5 = *(long *)(param_1 + 10);
  local_34 = 0;
  local_50._0_8_ = 0;
  local_50._8_8_ = 0;
  if (*param_1 == 0) {
    local_50 = *(undefined1 (*) [16])(param_1 + 0xe);
    param_1[0xe] = 0;
    param_1[0xf] = 0;
    param_1[0x10] = 0;
    param_1[0x11] = 0;
    *param_1 = -1;
    goto LAB_0739e6b8;
  }
  if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_03f5c550();
  }
  MessagePack_MessagePackStreamReader__RecycleLastMessage(lVar5,0);
  if (*(int *)(DAT_09182348 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  System_Threading_CancellationToken__ThrowIfCancellationRequested(param_1 + 0xc,0);
  while( true ) {
    uVar1 = MessagePack_MessagePackStreamReader__TryReadArrayHeader(lVar5,&local_34,0);
    uVar3 = DAT_0919a288;
    if ((uVar1 & 1) != 0) {
      *param_1 = -2;
      FUN_06b3dc04(param_1 + 2,local_34,uVar3);
      return;
    }
    lVar2 = MessagePack_MessagePackStreamReader__TryReadMoreDataAsync
                      (lVar5,*(undefined8 *)(param_1 + 0xc),0);
    if (lVar2 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    auVar6 = FUN_062e82b0(lVar2,0,DAT_091bcba0);
    local_50 = auVar6;
    uVar1 = FUN_06daadec(local_50,DAT_0919b9e0);
    if ((uVar1 & 1) == 0) {
      *param_1 = 0;
      *(undefined1 (*) [16])(param_1 + 0xe) = local_50;
      thunk_FUN_03f5d7b8(param_1 + 0xe,0);
      FUN_047786a8(param_1 + 2,local_50,param_1,DAT_0919a230);
      return;
    }
LAB_0739e6b8:
    uVar1 = FUN_06daae34(local_50,DAT_0919b9d8);
    if ((uVar1 & 1) == 0) break;
    if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
  }
  thunk_FUN_03fc39d4(&DAT_09183fe0);
  uVar3 = thunk_FUN_03f9944c();
  uVar4 = thunk_FUN_03fc39d4(&DAT_0920ff88);
  System_IO_EndOfStreamException___ctor(uVar3,uVar4,0);
  uVar4 = thunk_FUN_03fc39d4(&DAT_091ecf58);
                    /* WARNING: Subroutine does not return */
  FUN_03f5c414(uVar3,uVar4);
}

