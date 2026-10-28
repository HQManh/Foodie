// rea decompile_all
// name: Newtonsoft.Json.Bson.BsonReader$$ReadNormal
// address: 0x7719d0c
// body: available
// range: 0x7719d0c-0x7719f13 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x7719f10 to 0x3f5c414 FUN_03f5c414 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 Newtonsoft_Json_Bson_BsonReader__ReadNormal(long param_1)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  bool bVar4;
  undefined1 uVar5;
  char cVar6;
  undefined4 uVar7;
  undefined8 uVar8;
  undefined *puVar9;
  undefined8 uVar10;
  long lVar11;
  long lVar12;
  
  if ((DAT_095229e9 & 1) == 0) {
    FUN_03f5c2a4(&DAT_0918e990);
    DAT_095229e9 = 1;
  }
  uVar1 = *(uint *)(param_1 + 0x24);
  if (uVar1 < 0xd) {
    uVar2 = 1 << (ulong)(uVar1 & 0x1f);
    if ((uVar2 & 0x1e82) != 0) {
      return 0;
    }
    if ((uVar2 & 0x128) != 0) {
      lVar12 = *(long *)(param_1 + 0xa0);
      if (lVar12 != 0) {
        iVar3 = *(int *)(lVar12 + 0x14) + -1;
        if (*(int *)(lVar12 + 0x18) < iVar3) {
          cVar6 = *(char *)(lVar12 + 0x10);
          uVar5 = Newtonsoft_Json_Bson_BsonReader__ReadType(param_1);
          *(undefined1 *)(param_1 + 0x98) = uVar5;
          uVar8 = Newtonsoft_Json_Bson_BsonReader__ReadString(param_1);
          if (cVar6 != '\x04') {
            Newtonsoft_Json_JsonReader__SetToken(param_1,4,uVar8,0);
            return 1;
          }
          goto LAB_07719dd4;
        }
        if (*(int *)(lVar12 + 0x18) == iVar3) {
          cVar6 = Newtonsoft_Json_Bson_BsonReader__ReadByte(param_1);
          if (cVar6 == '\0') {
            Newtonsoft_Json_Bson_BsonReader__PopContext(param_1);
            lVar11 = *(long *)(param_1 + 0xa0);
            if (lVar11 != 0) {
              *(int *)(lVar11 + 0x18) = *(int *)(lVar11 + 0x18) + *(int *)(lVar12 + 0x14);
            }
            uVar7 = 0xd;
            if (*(char *)(lVar12 + 0x10) != '\x03') {
              uVar7 = 0xe;
            }
            Newtonsoft_Json_JsonReader__SetToken(param_1,uVar7,0);
            return 1;
          }
          puVar9 = &DAT_09211ce0;
        }
        else {
          puVar9 = &DAT_0920b590;
        }
        uVar8 = thunk_FUN_03fc39d4(puVar9);
        uVar8 = Newtonsoft_Json_JsonReaderException__Create(param_1,uVar8,0);
        goto LAB_07719efc;
      }
      if (*(char *)(param_1 + 0x71) == '\0') {
        return 0;
      }
      goto LAB_07719de8;
    }
    if (uVar1 == 2) {
LAB_07719dd4:
      Newtonsoft_Json_Bson_BsonReader__ReadType(param_1,*(undefined1 *)(param_1 + 0x98));
      return 1;
    }
  }
  if (uVar1 != 0) {
    thunk_FUN_03fc39d4(&DAT_09181558);
    uVar8 = thunk_FUN_03f9944c();
    System_ArgumentOutOfRangeException___ctor(uVar8,0);
LAB_07719efc:
    uVar10 = thunk_FUN_03fc39d4(&DAT_091c4198);
                    /* WARNING: Subroutine does not return */
    FUN_03f5c414(uVar8,uVar10);
  }
LAB_07719de8:
  uVar7 = 1;
  bVar4 = *(char *)(param_1 + 0xa8) != '\0';
  if (bVar4) {
    uVar7 = 2;
  }
  uVar5 = 3;
  if (bVar4) {
    uVar5 = 4;
  }
  Newtonsoft_Json_JsonReader__SetToken(param_1,uVar7,0);
  lVar12 = thunk_FUN_03f9944c(DAT_0918e990);
  System_Object___ctor(lVar12,0);
  *(undefined1 *)(lVar12 + 0x10) = uVar5;
  Newtonsoft_Json_Bson_BsonReader__PushContext(param_1,lVar12);
  uVar7 = Newtonsoft_Json_Bson_BsonReader__ReadInt32(param_1);
  *(undefined4 *)(lVar12 + 0x14) = uVar7;
  return 1;
}

