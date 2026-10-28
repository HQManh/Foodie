// rea decompile_all
// name: Newtonsoft.Json.Utilities.ReflectionUtils$$GetMemberInfoFromType
// address: 0x769dba8
// body: available
// range: 0x769dba8-0x769de0f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x769dd98 to 0x75d135c System.Type$$GetProperty (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x769de00 to 0x4b00770 FUN_04b00770 (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x769de04 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x769de0c to 0x3f5c8d0 FUN_03f5c8d0 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void Newtonsoft_Json_Utilities_ReflectionUtils__GetMemberInfoFromType(long *param_1,long *param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  long *plVar4;
  undefined8 uVar5;
  long lVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  
  if ((DAT_095225fd & 1) == 0) {
    FUN_03f5c2a4(&DAT_091ca650);
    FUN_03f5c2a4(&DAT_091caa78);
    FUN_03f5c2a4(&DAT_091caee0);
    FUN_03f5c2a4(&DAT_09178e18);
    FUN_03f5c2a4(&DAT_09189788);
    FUN_03f5c2a4(&DAT_091eeef0);
    FUN_03f5c2a4(&DAT_09193aa0);
    DAT_095225fd = 1;
  }
  iVar1 = Newtonsoft_Json_Utilities_TypeExtensions__MemberType(param_2,0);
  if (iVar1 == 0x10) {
    if (param_2 != (long *)0x0) {
      lVar6 = *param_2;
      if ((*(byte *)(lVar6 + 0x130) < *(byte *)(DAT_09189788 + 0x130)) ||
         (*(long *)(*(long *)(lVar6 + 200) + (ulong)*(byte *)(DAT_09189788 + 0x130) * 8 + -8) !=
          DAT_09189788)) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c8d0(param_2);
      }
      uVar3 = (**(code **)(lVar6 + 0x268))(param_2,*(undefined8 *)(lVar6 + 0x270));
      if (*(int *)(DAT_09193aa0 + 0xe4) == 0) {
        FUN_03f5c424(DAT_09193aa0);
      }
      puVar7 = *(undefined8 **)(DAT_09193aa0 + 0xb8);
      lVar6 = puVar7[3];
      if (lVar6 == 0) {
        if (*(int *)(DAT_09193aa0 + 0xe4) == 0) {
          FUN_03f5c424(DAT_09193aa0);
          puVar7 = *(undefined8 **)(DAT_09193aa0 + 0xb8);
        }
        uVar8 = *puVar7;
        lVar6 = thunk_FUN_03f9944c(DAT_09178e18);
        FUN_05324070(lVar6,uVar8,DAT_091eeef0,0);
        plVar4 = (long *)(*(long *)(DAT_09193aa0 + 0xb8) + 0x18);
        *plVar4 = lVar6;
        thunk_FUN_03f5d7b8(plVar4,lVar6);
      }
      uVar3 = FUN_04af8044(uVar3,lVar6,DAT_091ca650);
      uVar3 = FUN_04b049e4(uVar3,DAT_091caee0);
      uVar8 = (**(code **)(*param_2 + 0x1b8))(param_2,*(undefined8 *)(*param_2 + 0x1c0));
      uVar5 = (**(code **)(*param_2 + 600))(param_2,*(undefined8 *)(*param_2 + 0x260));
      if (param_1 != (long *)0x0) {
        System_Type__GetProperty(param_1,uVar8,0x3c,0,uVar5,uVar3,0,0);
        return;
      }
    }
  }
  else if (param_2 != (long *)0x0) {
    uVar3 = (**(code **)(*param_2 + 0x1b8))(param_2,*(undefined8 *)(*param_2 + 0x1c0));
    uVar2 = Newtonsoft_Json_Utilities_TypeExtensions__MemberType(param_2,0);
    if (param_1 != (long *)0x0) {
      uVar3 = (**(code **)(*param_1 + 0x738))
                        (param_1,uVar3,uVar2,0x3c,*(undefined8 *)(*param_1 + 0x740));
      FUN_04b00770(uVar3,DAT_091caa78);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

