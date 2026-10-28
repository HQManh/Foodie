// rea decompile_all
// name: System.MonoCustomAttrs$$GetPseudoCustomAttributesData
// address: 0x76053a4
// body: available
// range: 0x76053a4-0x76056a3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x7605690 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x7605694 to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x76056a0 to 0x3f5c414 FUN_03f5c414 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


long * System_MonoCustomAttrs__GetPseudoCustomAttributesData(long *param_1,long *param_2)

{
  uint uVar1;
  byte bVar2;
  ulong uVar3;
  undefined8 uVar4;
  long *plVar5;
  long lVar6;
  long lVar7;
  long *plVar8;
  
  if ((DAT_09521fee & 1) == 0) {
    FUN_03f5c2a4(&DAT_091c0140);
    FUN_03f5c2a4(&DAT_0917fdb0);
    FUN_03f5c2a4(&DAT_09188378);
    FUN_03f5c2a4(&DAT_0918a3a8);
    FUN_03f5c2a4(&DAT_0918a3b8);
    FUN_03f5c2a4(&DAT_0918a3c8);
    DAT_09521fee = 1;
  }
  plVar8 = (long *)0x0;
  if (param_1 != (long *)0x0) {
    lVar6 = *param_1;
    bVar2 = *(byte *)(lVar6 + 0x130);
    if ((bVar2 < *(byte *)(DAT_0918a3b8 + 0x130)) ||
       (*(long *)(*(long *)(lVar6 + 200) + (ulong)*(byte *)(DAT_0918a3b8 + 0x130) * 8 + -8) !=
        DAT_0918a3b8)) {
      if ((bVar2 < *(byte *)(DAT_0918a3a8 + 0x130)) ||
         (*(long *)(*(long *)(lVar6 + 200) + (ulong)*(byte *)(DAT_0918a3a8 + 0x130) * 8 + -8) !=
          DAT_0918a3a8)) {
        if ((bVar2 < *(byte *)(DAT_0918a3c8 + 0x130)) ||
           (*(long *)(*(long *)(lVar6 + 200) + (ulong)*(byte *)(DAT_0918a3c8 + 0x130) * 8 + -8) !=
            DAT_0918a3c8)) {
          if ((bVar2 < *(byte *)(DAT_095354b8 + 0x130)) ||
             (*(long *)(*(long *)(lVar6 + 200) + (ulong)*(byte *)(DAT_095354b8 + 0x130) * 8 + -8) !=
              DAT_095354b8)) {
            plVar8 = (long *)0x0;
          }
          else {
            if (*(int *)(DAT_09188378 + 0xe4) == 0) {
              FUN_03f5c424();
            }
            plVar8 = (long *)System_MonoCustomAttrs__GetPseudoCustomAttributesData(param_1);
          }
        }
        else {
          plVar8 = (long *)System_Reflection_RuntimeParameterInfo__GetPseudoCustomAttributesData
                                     (param_1,0);
        }
      }
      else {
        plVar8 = (long *)System_Reflection_FieldInfo__GetPseudoCustomAttributesData(param_1,0);
      }
    }
    else {
      plVar8 = (long *)System_Reflection_RuntimeMethodInfo__GetPseudoCustomAttributesData(param_1,0)
      ;
    }
  }
  if (*(int *)(DAT_095354b8 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  uVar3 = System_Type__op_Inequality(param_2,0,0);
  if (((uVar3 & 1) != 0) && (plVar8 != (long *)0x0)) {
    uVar1 = *(uint *)(plVar8 + 3);
    if (0 < (int)uVar1) {
      lVar6 = 0;
      do {
        if (uVar1 <= (uint)lVar6) {
LAB_07605694:
                    /* WARNING: Subroutine does not return */
          FUN_03f5c558();
        }
        if ((plVar8[lVar6 + 4] == 0) ||
           (uVar4 = System_Reflection_CustomAttributeData__get_AttributeType(plVar8[lVar6 + 4],0),
           param_2 == (long *)0x0)) {
LAB_07605690:
                    /* WARNING: Subroutine does not return */
          FUN_03f5c550();
        }
        uVar3 = (**(code **)(*param_2 + 0x2b8))(param_2,uVar4,*(undefined8 *)(*param_2 + 0x2c0));
        if ((uVar3 & 1) != 0) {
          if ((int)plVar8[3] == 1) {
            return plVar8;
          }
          plVar5 = (long *)FUN_03f5c394(DAT_0917fdb0,1);
          if ((uint)lVar6 < *(uint *)(plVar8 + 3)) {
            if (plVar5 == (long *)0x0) goto LAB_07605690;
            lVar6 = plVar8[lVar6 + 4];
            if ((lVar6 != 0) &&
               (lVar7 = thunk_FUN_03f99350(lVar6,*(undefined8 *)(*plVar5 + 0x40)), lVar7 == 0)) {
              uVar4 = thunk_FUN_03fa6ef4();
                    /* WARNING: Subroutine does not return */
              FUN_03f5c414(uVar4,0);
            }
            if ((int)plVar5[3] != 0) {
              plVar5[4] = lVar6;
              thunk_FUN_03f5d7b8(plVar5 + 4,lVar6);
              return plVar5;
            }
          }
          goto LAB_07605694;
        }
        uVar1 = *(uint *)(plVar8 + 3);
        lVar6 = lVar6 + 1;
      } while ((int)lVar6 < (int)uVar1);
    }
    lVar6 = DAT_091c0140;
    lVar7 = *(long *)(DAT_091c0140 + 0x38);
    if (lVar7 == 0) {
      FUN_03f95ac8(DAT_091c0140);
      lVar7 = *(long *)(lVar6 + 0x38);
    }
    lVar7 = *(long *)(lVar7 + 0x10);
    if ((*(ushort *)(lVar7 + 0x135) & 1) == 0) {
      lVar7 = FUN_03f95a6c();
    }
    if (*(int *)(lVar7 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    lVar6 = *(long *)(*(long *)(lVar6 + 0x38) + 0x10);
    if ((*(ushort *)(lVar6 + 0x135) & 1) == 0) {
      lVar6 = FUN_03f95a6c();
    }
    plVar8 = (long *)**(long **)(lVar6 + 0xb8);
  }
  return plVar8;
}

