// rea decompile_all
// name: System.Reflection.ParameterInfo$$GetRealObject
// address: 0x74e1fe0
// body: available
// range: 0x74e1fe0-0x74e223f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x74e20d0 to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x74e21b0 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x74e21d4 to 0x3f5c8d0 FUN_03f5c8d0 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x74e223c to 0x3f5c414 FUN_03f5c414 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 System_Reflection_ParameterInfo__GetRealObject(long param_1)

{
  uint uVar1;
  int iVar2;
  ulong uVar3;
  long *plVar4;
  undefined8 uVar5;
  undefined *puVar6;
  undefined8 uVar7;
  long lVar8;
  
  if ((DAT_095215a0 & 1) == 0) {
    FUN_03f5c2a4(&DAT_091881d0);
    FUN_03f5c2a4(&DAT_09188228);
    FUN_03f5c2a4(&DAT_09189788);
    DAT_095215a0 = 1;
  }
  uVar3 = System_Reflection_MemberInfo__op_Equality(*(undefined8 *)(param_1 + 0x28),0);
  if ((uVar3 & 1) != 0) {
    thunk_FUN_03fc39d4(&DAT_0918a948);
    uVar5 = thunk_FUN_03f9944c();
    puVar6 = &DAT_09204ee0;
    goto LAB_074e2214;
  }
  plVar4 = *(long **)(param_1 + 0x28);
  if (plVar4 == (long *)0x0) goto LAB_074e21b0;
  iVar2 = (**(code **)(*plVar4 + 0x1a8))(plVar4,*(undefined8 *)(*plVar4 + 0x1b0));
  if (iVar2 == 1) {
LAB_074e2060:
    plVar4 = *(long **)(param_1 + 0x28);
    if (*(int *)(param_1 + 0x38) == -1) {
      if (plVar4 == (long *)0x0) {
LAB_074e21b0:
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      iVar2 = (**(code **)(*plVar4 + 0x1a8))(plVar4,*(undefined8 *)(*plVar4 + 0x1b0));
      if (iVar2 == 8) {
        plVar4 = *(long **)(param_1 + 0x28);
        if (plVar4 != (long *)0x0) {
          lVar8 = *plVar4;
          if ((*(byte *)(DAT_09188228 + 0x130) <= *(byte *)(lVar8 + 0x130)) &&
             (*(long *)(*(long *)(lVar8 + 200) + (ulong)*(byte *)(DAT_09188228 + 0x130) * 8 + -8) ==
              DAT_09188228)) {
                    /* WARNING: Could not recover jumptable at 0x074e21ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            uVar5 = (**(code **)(lVar8 + 1000))(plVar4,*(undefined8 *)(lVar8 + 0x3f0));
            return uVar5;
          }
          goto LAB_074e21d4;
        }
        goto LAB_074e21b0;
      }
    }
    else {
      if (plVar4 == (long *)0x0) goto LAB_074e21b0;
      lVar8 = *plVar4;
      if ((*(byte *)(lVar8 + 0x130) < *(byte *)(DAT_091881d0 + 0x130)) ||
         (*(long *)(*(long *)(lVar8 + 200) + (ulong)*(byte *)(DAT_091881d0 + 0x130) * 8 + -8) !=
          DAT_091881d0)) {
LAB_074e21d4:
                    /* WARNING: Subroutine does not return */
        FUN_03f5c8d0();
      }
      lVar8 = (**(code **)(lVar8 + 0x3d8))(plVar4,*(undefined8 *)(lVar8 + 0x3e0));
      if (lVar8 != 0) {
        uVar1 = *(uint *)(param_1 + 0x38);
        uVar3 = (ulong)(int)uVar1;
        if ((int)uVar1 < (int)*(uint *)(lVar8 + 0x18)) {
          if (*(uint *)(lVar8 + 0x18) <= uVar1) {
                    /* WARNING: Subroutine does not return */
            FUN_03f5c558();
          }
LAB_074e2134:
          return *(undefined8 *)(lVar8 + uVar3 * 8 + 0x20);
        }
      }
    }
  }
  else {
    if (iVar2 != 0x10) {
      if (iVar2 != 8) {
        thunk_FUN_03fc39d4(&DAT_0918a948);
        uVar5 = thunk_FUN_03f9944c();
        puVar6 = &DAT_0920cbd0;
        goto LAB_074e2214;
      }
      goto LAB_074e2060;
    }
    plVar4 = *(long **)(param_1 + 0x28);
    if (plVar4 == (long *)0x0) goto LAB_074e21b0;
    lVar8 = *plVar4;
    if ((*(byte *)(lVar8 + 0x130) < *(byte *)(DAT_09189788 + 0x130)) ||
       (*(long *)(*(long *)(lVar8 + 200) + (ulong)*(byte *)(DAT_09189788 + 0x130) * 8 + -8) !=
        DAT_09189788)) goto LAB_074e21d4;
    lVar8 = (**(code **)(lVar8 + 0x268))(plVar4,*(undefined8 *)(lVar8 + 0x270));
    if (lVar8 != 0) {
      uVar1 = *(uint *)(param_1 + 0x38);
      uVar3 = (ulong)uVar1;
      if ((-1 < (int)uVar1) && ((int)uVar1 < *(int *)(lVar8 + 0x18))) goto LAB_074e2134;
    }
  }
  thunk_FUN_03fc39d4(&DAT_0918a948);
  uVar5 = thunk_FUN_03f9944c();
  puVar6 = &DAT_09208d30;
LAB_074e2214:
  uVar7 = thunk_FUN_03fc39d4(puVar6);
  System_Runtime_Serialization_SerializationException___ctor(uVar5,uVar7,0);
  uVar7 = thunk_FUN_03fc39d4(&DAT_091d5738);
                    /* WARNING: Subroutine does not return */
  FUN_03f5c414(uVar5,uVar7);
}

