// rea decompile_all
// name: Newtonsoft.Json.Serialization.JsonSerializerInternalReader$$CreateJObject
// address: 0x76b4230
// body: available
// range: 0x76b4230-0x76b44df inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x76b43fc to 0x3f5c414 FUN_03f5c414 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x76b44bc to 0x3f5c8d0 FUN_03f5c8d0 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x76b44c0 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x76b44c4 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x76b44c8 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x76b44d0 to 0x3f5c548 FUN_03f5c548 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x76b44d4 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x76b44d8 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x76b44dc to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x076b44cc) */

undefined8
Newtonsoft_Json_Serialization_JsonSerializerInternalReader__CreateJObject
          (undefined8 param_1,long *param_2)

{
  int iVar1;
  long *plVar2;
  long *plVar3;
  ulong uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  long lVar8;
  int *piVar9;
  
  if ((DAT_095226a8 & 1) == 0) {
    FUN_03f5c2a4(&DAT_09185a58);
    FUN_03f5c2a4(&DAT_09187270);
    FUN_03f5c2a4(&DAT_092215e0);
    DAT_095226a8 = 1;
  }
  Newtonsoft_Json_Utilities_ValidationUtils__ArgumentNotNull(param_2,DAT_092215e0);
  plVar2 = (long *)thunk_FUN_03f9944c(DAT_09187270);
  Newtonsoft_Json_Linq_JTokenWriter___ctor(plVar2,0);
  if (plVar2 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_03f5c550();
  }
  (**(code **)(*plVar2 + 0x578))(plVar2,*(undefined8 *)(*plVar2 + 0x580));
  if (param_2 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_03f5c550();
  }
  do {
    iVar1 = (**(code **)(*param_2 + 0x238))(param_2,*(undefined8 *)(*param_2 + 0x240));
    lVar8 = *param_2;
    if (iVar1 == 4) {
      plVar3 = (long *)(**(code **)(lVar8 + 0x248))(param_2,*(undefined8 *)(lVar8 + 0x250));
      if ((plVar3 != (long *)0x0) && (*plVar3 != DAT_09535468)) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c8d0(plVar3);
      }
      uVar4 = Newtonsoft_Json_JsonReader__ReadAndMoveToContent(param_2,0);
      if ((uVar4 & 1) == 0) break;
      uVar4 = Newtonsoft_Json_Serialization_JsonSerializerInternalReader__CheckPropertyName
                        (param_1,param_2,plVar3);
      if ((uVar4 & 1) == 0) {
        if (plVar2 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_03f5c550();
        }
        (**(code **)(*plVar2 + 0x5d8))(plVar2,plVar3,*(undefined8 *)(*plVar2 + 0x5e0));
        if (plVar2 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_03f5c550();
        }
        (**(code **)(*plVar2 + 0x608))(plVar2,param_2,1,1,0,*(undefined8 *)(*plVar2 + 0x610));
      }
    }
    else {
      iVar1 = (**(code **)(lVar8 + 0x238))(param_2,*(undefined8 *)(lVar8 + 0x240));
      if (iVar1 != 5) {
        if (plVar2 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_03f5c550();
        }
        (**(code **)(*plVar2 + 0x588))(plVar2,*(undefined8 *)(*plVar2 + 0x590));
        if (plVar2 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_03f5c550();
        }
        uVar5 = Newtonsoft_Json_Linq_JTokenWriter__get_Token(plVar2,0);
        if (plVar2 == (long *)0x0) {
          return uVar5;
        }
        lVar8 = *plVar2;
        uVar4 = (ulong)*(ushort *)(lVar8 + 0x12e);
        if (uVar4 == 0) goto LAB_076b4474;
        piVar9 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
        goto LAB_076b445c;
      }
    }
    uVar4 = (**(code **)(*param_2 + 0x288))(param_2,*(undefined8 *)(*param_2 + 0x290));
  } while ((uVar4 & 1) != 0);
  uVar5 = thunk_FUN_03fc39d4(&DAT_09211d00);
  uVar5 = Newtonsoft_Json_JsonSerializationException__Create(param_2,uVar5,0);
  uVar6 = thunk_FUN_03fc39d4(&DAT_091d1ae0);
                    /* WARNING: Subroutine does not return */
  FUN_03f5c414(uVar5,uVar6);
  while( true ) {
    uVar4 = uVar4 - 1;
    piVar9 = piVar9 + 4;
    if (uVar4 == 0) break;
LAB_076b445c:
    if (*(long *)(piVar9 + -2) == DAT_09185a58) {
      puVar7 = (undefined8 *)(lVar8 + (long)*piVar9 * 0x10 + 0x138);
      goto LAB_076b4490;
    }
  }
LAB_076b4474:
  puVar7 = (undefined8 *)FUN_03f95da8(plVar2,DAT_09185a58,0);
LAB_076b4490:
  (*(code *)*puVar7)(plVar2,puVar7[1]);
  return uVar5;
}

