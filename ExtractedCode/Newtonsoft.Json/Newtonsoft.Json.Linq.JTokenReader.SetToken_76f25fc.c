// rea decompile_all
// name: Newtonsoft.Json.Linq.JTokenReader$$SetToken
// address: 0x76f25fc
// body: available
// range: 0x76f25fc-0x76f2c23 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x76f2a00 to 0x7645308 Newtonsoft.Json.JsonReader$$SetToken (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x76f2b84 to 0x764708c Newtonsoft.Json.JsonReader$$SetToken (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x76f2b98 to 0x3f5c8d0 FUN_03f5c8d0 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x76f2b9c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x76f2c20 to 0x3f5c414 FUN_03f5c414 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void Newtonsoft_Json_Linq_JTokenReader__SetToken(long param_1,long *param_2)

{
  undefined4 uVar1;
  long *plVar2;
  long lVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined4 local_34;
  undefined8 local_28;
  
  if ((DAT_095228b6 & 1) == 0) {
    FUN_03f5c2a4(&DAT_091835c0);
    FUN_03f5c2a4(&DAT_09183548);
    FUN_03f5c2a4(&DAT_09187208);
    FUN_03f5c2a4(&DAT_09187230);
    FUN_03f5c2a4(&DAT_09187278);
    FUN_03f5c2a4(&DAT_0918c918);
    DAT_095228b6 = 1;
  }
  if (param_2 == (long *)0x0) {
LAB_076f2b9c:
                    /* WARNING: Subroutine does not return */
    FUN_03f5c550();
  }
  uVar1 = (**(code **)(*param_2 + 0x228))(param_2,*(undefined8 *)(*param_2 + 0x230));
  switch(uVar1) {
  case 1:
    uVar5 = 1;
    goto LAB_076f29ec;
  case 2:
    uVar5 = 2;
LAB_076f29ec:
    Newtonsoft_Json_JsonReader__SetToken(param_1,uVar5,0);
    return;
  case 3:
    if ((*(byte *)(*param_2 + 0x130) < *(byte *)(DAT_09187208 + 0x130)) ||
       (*(long *)(*(long *)(*param_2 + 200) + (ulong)*(byte *)(DAT_09187208 + 0x130) * 8 + -8) !=
        DAT_09187208)) break;
    lVar3 = param_2[0xb];
    uVar5 = 3;
    goto LAB_076f2b70;
  case 4:
    if ((*(byte *)(DAT_09187230 + 0x130) <= *(byte *)(*param_2 + 0x130)) &&
       (*(long *)(*(long *)(*param_2 + 200) + (ulong)*(byte *)(DAT_09187230 + 0x130) * 8 + -8) ==
        DAT_09187230)) {
      lVar3 = param_2[0xc];
      uVar5 = 4;
      goto LAB_076f2b70;
    }
    break;
  case 5:
    if ((*(byte *)(DAT_09187278 + 0x130) <= *(byte *)(*param_2 + 0x130)) &&
       (*(long *)(*(long *)(*param_2 + 200) + (ulong)*(byte *)(DAT_09187278 + 0x130) * 8 + -8) ==
        DAT_09187278)) {
      lVar3 = param_2[7];
      uVar5 = 5;
      goto LAB_076f2b70;
    }
    break;
  case 6:
    if ((*(byte *)(DAT_09187278 + 0x130) <= *(byte *)(*param_2 + 0x130)) &&
       (*(long *)(*(long *)(*param_2 + 200) + (ulong)*(byte *)(DAT_09187278 + 0x130) * 8 + -8) ==
        DAT_09187278)) {
      lVar3 = param_2[7];
      uVar5 = 7;
      goto LAB_076f2b70;
    }
    break;
  case 7:
    if ((*(byte *)(DAT_09187278 + 0x130) <= *(byte *)(*param_2 + 0x130)) &&
       (*(long *)(*(long *)(*param_2 + 200) + (ulong)*(byte *)(DAT_09187278 + 0x130) * 8 + -8) ==
        DAT_09187278)) {
      lVar3 = param_2[7];
      uVar5 = 8;
      goto LAB_076f2b70;
    }
    break;
  case 8:
    if ((*(byte *)(*param_2 + 0x130) < *(byte *)(DAT_09187278 + 0x130)) ||
       (*(long *)(*(long *)(*param_2 + 200) + (ulong)*(byte *)(DAT_09187278 + 0x130) * 8 + -8) !=
        DAT_09187278)) break;
    lVar3 = param_2[7];
    goto LAB_076f2b68;
  case 9:
    if ((*(byte *)(DAT_09187278 + 0x130) <= *(byte *)(*param_2 + 0x130)) &&
       (*(long *)(*(long *)(*param_2 + 200) + (ulong)*(byte *)(DAT_09187278 + 0x130) * 8 + -8) ==
        DAT_09187278)) {
      lVar3 = param_2[7];
      uVar5 = 10;
      goto LAB_076f2b70;
    }
    break;
  case 10:
    if ((*(byte *)(DAT_09187278 + 0x130) <= *(byte *)(*param_2 + 0x130)) &&
       (*(long *)(*(long *)(*param_2 + 200) + (ulong)*(byte *)(DAT_09187278 + 0x130) * 8 + -8) ==
        DAT_09187278)) {
      lVar3 = param_2[7];
      uVar5 = 0xb;
      goto LAB_076f2b70;
    }
    break;
  case 0xb:
    if ((*(byte *)(DAT_09187278 + 0x130) <= *(byte *)(*param_2 + 0x130)) &&
       (*(long *)(*(long *)(*param_2 + 200) + (ulong)*(byte *)(DAT_09187278 + 0x130) * 8 + -8) ==
        DAT_09187278)) {
      lVar3 = param_2[7];
      uVar5 = 0xc;
      goto LAB_076f2b70;
    }
    break;
  case 0xc:
    if ((*(byte *)(DAT_09187278 + 0x130) <= *(byte *)(*param_2 + 0x130)) &&
       (*(long *)(*(long *)(*param_2 + 200) + (ulong)*(byte *)(DAT_09187278 + 0x130) * 8 + -8) ==
        DAT_09187278)) {
      plVar2 = (long *)param_2[7];
      if ((plVar2 != (long *)0x0) && (*plVar2 == DAT_09183548)) {
        puVar4 = (undefined8 *)thunk_FUN_03f99594(plVar2);
        uVar5 = *puVar4;
        uVar1 = *(undefined4 *)(param_1 + 0x48);
        if (*(int *)(DAT_091835c0 + 0xe4) == 0) {
          FUN_03f5c424();
        }
        local_28 = Newtonsoft_Json_Utilities_DateTimeUtils__EnsureDateTime(uVar5,uVar1,0);
        plVar2 = (long *)FUN_03f5c42c(DAT_09183548,&local_28);
      }
      Newtonsoft_Json_JsonReader__SetToken(param_1,0x10,plVar2,0);
      return;
    }
    break;
  case 0xd:
    if ((*(byte *)(DAT_09187278 + 0x130) <= *(byte *)(*param_2 + 0x130)) &&
       (*(long *)(*(long *)(*param_2 + 200) + (ulong)*(byte *)(DAT_09187278 + 0x130) * 8 + -8) ==
        DAT_09187278)) {
      lVar3 = param_2[7];
      uVar5 = 6;
      goto LAB_076f2b70;
    }
    break;
  case 0xe:
    if ((*(byte *)(DAT_09187278 + 0x130) <= *(byte *)(*param_2 + 0x130)) &&
       (*(long *)(*(long *)(*param_2 + 200) + (ulong)*(byte *)(DAT_09187278 + 0x130) * 8 + -8) ==
        DAT_09187278)) {
      lVar3 = param_2[7];
      uVar5 = 0x11;
      goto LAB_076f2b70;
    }
    break;
  case 0xf:
  case 0x11:
    if ((*(byte *)(*param_2 + 0x130) < *(byte *)(DAT_09187278 + 0x130)) ||
       (*(long *)(*(long *)(*param_2 + 200) + (ulong)*(byte *)(DAT_09187278 + 0x130) * 8 + -8) !=
        DAT_09187278)) break;
    plVar2 = (long *)param_2[7];
    if (plVar2 == (long *)0x0) {
      lVar3 = 0;
    }
    else {
      lVar3 = (**(code **)(*plVar2 + 0x168))(plVar2,*(undefined8 *)(*plVar2 + 0x170));
    }
    goto LAB_076f2b68;
  case 0x10:
    if ((*(byte *)(*param_2 + 0x130) < *(byte *)(DAT_09187278 + 0x130)) ||
       (*(long *)(*(long *)(*param_2 + 200) + (ulong)*(byte *)(DAT_09187278 + 0x130) * 8 + -8) !=
        DAT_09187278)) break;
    plVar2 = (long *)param_2[7];
    if (plVar2 == (long *)0x0) {
      lVar3 = 0;
    }
    else {
      lVar3 = *plVar2;
      if ((*(byte *)(lVar3 + 0x130) < *(byte *)(DAT_0918c918 + 0x130)) ||
         (*(long *)(*(long *)(lVar3 + 200) + (ulong)*(byte *)(DAT_0918c918 + 0x130) * 8 + -8) !=
          DAT_0918c918)) {
        lVar3 = (**(code **)(lVar3 + 0x168))(plVar2,*(undefined8 *)(lVar3 + 0x170));
      }
      else {
        lVar3 = System_Uri__get_OriginalString(plVar2,0);
      }
    }
    if (param_1 == 0) goto LAB_076f2b9c;
LAB_076f2b68:
    uVar5 = 9;
LAB_076f2b70:
    Newtonsoft_Json_JsonReader__SetToken(param_1,uVar5,lVar3,0);
    return;
  default:
    FUN_039b1d98(param_2);
    local_34 = (**(code **)(*param_2 + 0x228))(param_2,*(undefined8 *)(*param_2 + 0x230));
    uVar5 = thunk_FUN_03fc39d4(&DAT_09187268);
    uVar5 = FUN_03f5c42c(uVar5,&local_34);
    uVar6 = thunk_FUN_03fc39d4(&DAT_09211128);
    uVar7 = thunk_FUN_03fc39d4(&DAT_09211bf8);
    uVar5 = Newtonsoft_Json_Utilities_MiscellaneousUtils__CreateArgumentOutOfRangeException
                      (uVar6,uVar5,uVar7,0);
    uVar6 = thunk_FUN_03fc39d4(&DAT_091d1580);
                    /* WARNING: Subroutine does not return */
    FUN_03f5c414(uVar5,uVar6);
  }
                    /* WARNING: Subroutine does not return */
  FUN_03f5c8d0(param_2);
}

