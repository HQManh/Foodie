// rea decompile_all
// name: Newtonsoft.Json.Linq.JsonPath.JPath$$TryParseExpression
// address: 0x76fe14c
// body: available
// range: 0x76fe14c-0x76fe35f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x76fe314 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x76fe35c to 0x3f5c414 FUN_03f5c414 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 Newtonsoft_Json_Linq_JsonPath_JPath__TryParseExpression(long param_1,long *param_2)

{
  int iVar1;
  uint uVar2;
  long lVar3;
  short sVar4;
  long lVar5;
  ulong uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  long lVar9;
  
  if ((DAT_09522926 & 1) == 0) {
    FUN_03f5c2a4(&DAT_091aef50);
    FUN_03f5c2a4(&DAT_091aef48);
    FUN_03f5c2a4(&DAT_0917c8c0);
    FUN_03f5c2a4(&DAT_0918a320);
    DAT_09522926 = 1;
  }
  if (*(long *)(param_1 + 0x10) != 0) {
    sVar4 = System_String__get_Chars(*(long *)(param_1 + 0x10),*(undefined4 *)(param_1 + 0x20),0);
    if (sVar4 == 0x24) {
      lVar5 = thunk_FUN_03f9944c(DAT_0917c8c0);
      FUN_057e0400(lVar5,DAT_091aef48);
      if (*(int *)(DAT_0918a320 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      lVar3 = DAT_091aef50;
      if (lVar5 != 0) {
        lVar9 = *(long *)(lVar5 + 0x10);
        uVar8 = **(undefined8 **)(DAT_0918a320 + 0xb8);
        *(int *)(lVar5 + 0x1c) = *(int *)(lVar5 + 0x1c) + 1;
        if (lVar9 != 0) {
          uVar2 = *(uint *)(lVar5 + 0x18);
          if (uVar2 < *(uint *)(lVar9 + 0x18)) {
            *(uint *)(lVar5 + 0x18) = uVar2 + 1;
            *(undefined8 *)(lVar9 + (long)(int)uVar2 * 8 + 0x20) = uVar8;
            thunk_FUN_03f5d7b8();
          }
          else {
            FUN_057e0c68(lVar5,uVar8,
                         *(undefined8 *)(*(long *)(*(long *)(lVar3 + 0x20) + 0xc0) + 0x70));
          }
          goto LAB_076fe2cc;
        }
      }
    }
    else if (*(long *)(param_1 + 0x10) != 0) {
      sVar4 = System_String__get_Chars(*(long *)(param_1 + 0x10),*(undefined4 *)(param_1 + 0x20),0);
      if (sVar4 != 0x40) {
        *param_2 = 0;
        thunk_FUN_03f5d7b8(param_2,0);
        return 0;
      }
      lVar5 = thunk_FUN_03f9944c(DAT_0917c8c0);
      FUN_057e0400(lVar5,DAT_091aef48);
LAB_076fe2cc:
      *param_2 = lVar5;
      thunk_FUN_03f5d7b8(param_2,lVar5);
      lVar5 = *param_2;
      iVar1 = *(int *)(param_1 + 0x20) + 1;
      *(int *)(param_1 + 0x20) = iVar1;
      uVar6 = Newtonsoft_Json_Linq_JsonPath_JPath__ParsePath(param_1,lVar5,iVar1,1);
      if ((uVar6 & 1) == 0) {
        return 1;
      }
      thunk_FUN_03fc39d4(&DAT_09187348);
      uVar8 = thunk_FUN_03f9944c();
      uVar7 = thunk_FUN_03fc39d4(&DAT_0920a618);
      Newtonsoft_Json_JsonException___ctor(uVar8,uVar7,0);
      uVar7 = thunk_FUN_03fc39d4(&DAT_091d1338);
                    /* WARNING: Subroutine does not return */
      FUN_03f5c414(uVar8,uVar7);
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

