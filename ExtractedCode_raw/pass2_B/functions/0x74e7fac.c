// rea decompile_all
// name: System.Reflection.MemberInfoSerializationHolder$$GetRealObject
// address: 0x74e7fac
// body: available
// range: 0x74e7fac-0x74e87bf inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x74e8710 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x74e8714 to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x74e8718 to 0x3f5c8d0 FUN_03f5c8d0 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x74e8720 to 0x3f5c8d0 FUN_03f5c8d0 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x74e8780 to 0x3f5c414 FUN_03f5c414 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


long * System_Reflection_MemberInfoSerializationHolder__GetRealObject(long param_1)

{
  int iVar1;
  bool bVar2;
  ulong uVar3;
  long *plVar4;
  long lVar5;
  long lVar6;
  undefined *puVar7;
  undefined8 *puVar8;
  long lVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  ulong uVar12;
  long *plVar13;
  
  if ((DAT_095215cd & 1) == 0) {
    FUN_03f5c2a4(&DAT_0917fd30);
    FUN_03f5c2a4(&DAT_0917fed0);
    FUN_03f5c2a4(&DAT_0917ff08);
    FUN_03f5c2a4(&DAT_091802d8);
    FUN_03f5c2a4(&DAT_091803c8);
    FUN_03f5c2a4(&DAT_0918a388);
    FUN_03f5c2a4(&DAT_0918a3b8);
    FUN_03f5c2a4(&DAT_0918a3e0);
    FUN_03f5c2a4(&DAT_0918a400);
    FUN_03f5c2a4(&DAT_09170c50);
    FUN_03f5c2a4(&DAT_09180748);
    FUN_03f5c2a4(&DAT_09203448);
    DAT_095215cd = 1;
  }
  if (*(long *)(param_1 + 0x10) == 0) {
LAB_074e8734:
    puVar7 = &DAT_09204ee0;
LAB_074e873c:
    uVar11 = thunk_FUN_03fc39d4(puVar7);
    uVar11 = System_Environment__GetResourceString(uVar11,0);
  }
  else {
    uVar11 = *(undefined8 *)(param_1 + 0x18);
    if (*(int *)(DAT_0918a400 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    uVar3 = System_RuntimeType__op_Equality(uVar11,0,0);
    uVar11 = DAT_09170c50;
    if ((uVar3 & 1) != 0) goto LAB_074e8734;
    iVar1 = *(int *)(param_1 + 0x30);
    if (iVar1 < 4) {
      if (iVar1 != 1) {
        if (iVar1 != 2) {
          if (iVar1 != 0) goto LAB_074e8784;
          goto LAB_074e8734;
        }
        plVar4 = *(long **)(param_1 + 0x18);
        if (plVar4 == (long *)0x0) goto LAB_074e8710;
        uVar11 = (**(code **)(*plVar4 + 0x738))
                           (plVar4,*(undefined8 *)(param_1 + 0x10),2,0x4003c,
                            *(undefined8 *)(*plVar4 + 0x740));
        puVar8 = &DAT_0917fed0;
        goto LAB_074e823c;
      }
      if (*(long *)(param_1 + 0x20) != 0) {
        plVar4 = *(long **)(param_1 + 0x18);
        if (plVar4 == (long *)0x0) goto LAB_074e8710;
        uVar11 = (**(code **)(*plVar4 + 0x738))
                           (plVar4,*(undefined8 *)(param_1 + 0x10),1,0x4003c,
                            *(undefined8 *)(*plVar4 + 0x740));
        lVar5 = thunk_FUN_03f99350(uVar11,DAT_0917fd30);
        if (lVar5 == 0) goto LAB_074e8710;
        uVar3 = (ulong)*(uint *)(lVar5 + 0x18);
        if (uVar3 == 1) {
LAB_074e8378:
          return *(long **)(lVar5 + 0x20);
        }
        if (1 < (int)*(uint *)(lVar5 + 0x18)) {
          uVar12 = 0;
          do {
            if (*(long *)(param_1 + 0x28) == 0) {
              if (uVar3 <= uVar12) goto LAB_074e8714;
              plVar4 = *(long **)(lVar5 + 0x20 + uVar12 * 8);
              if ((plVar4 == (long *)0x0) ||
                 (lVar6 = (**(code **)(*plVar4 + 0x168))(plVar4,*(undefined8 *)(*plVar4 + 0x170)),
                 lVar6 == 0)) goto LAB_074e8710;
              uVar11 = *(undefined8 *)(param_1 + 0x20);
            }
            else {
              if (uVar3 <= uVar12) goto LAB_074e8714;
              plVar4 = *(long **)(lVar5 + 0x20 + uVar12 * 8);
              if (plVar4 == (long *)0x0) goto LAB_074e8710;
              lVar6 = *plVar4;
              if ((*(byte *)(lVar6 + 0x130) < *(byte *)(DAT_0918a388 + 0x130)) ||
                 (*(long *)(*(long *)(lVar6 + 200) + (ulong)*(byte *)(DAT_0918a388 + 0x130) * 8 + -8
                           ) != DAT_0918a388)) goto LAB_074e8718;
              lVar6 = (**(code **)(lVar6 + 0x3b8))(plVar4,1,*(undefined8 *)(lVar6 + 0x3c0));
              if (lVar6 == 0) goto LAB_074e8710;
              uVar11 = *(undefined8 *)(param_1 + 0x28);
            }
            uVar3 = System_String__Equals(lVar6,uVar11,0);
            if ((uVar3 & 1) != 0) goto LAB_074e843c;
            uVar3 = (ulong)*(uint *)(lVar5 + 0x18);
            uVar12 = uVar12 + 1;
          } while ((long)uVar12 < (long)(int)*(uint *)(lVar5 + 0x18));
        }
        goto LAB_074e8608;
      }
LAB_074e8724:
      puVar7 = &DAT_0920f848;
      goto LAB_074e873c;
    }
    if (iVar1 == 4) {
      plVar4 = *(long **)(param_1 + 0x18);
      if (plVar4 == (long *)0x0) goto LAB_074e8710;
      uVar11 = (**(code **)(*plVar4 + 0x738))
                         (plVar4,*(undefined8 *)(param_1 + 0x10),4,0x4003c,
                          *(undefined8 *)(*plVar4 + 0x740));
      puVar8 = &DAT_0917ff08;
LAB_074e823c:
      lVar5 = thunk_FUN_03f99350(uVar11,*puVar8);
      if (lVar5 == 0) {
LAB_074e8710:
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      if (*(long *)(lVar5 + 0x18) != 0) {
        if ((int)*(long *)(lVar5 + 0x18) != 0) {
          return *(long **)(lVar5 + 0x20);
        }
LAB_074e8714:
                    /* WARNING: Subroutine does not return */
        FUN_03f5c558();
      }
    }
    else if (iVar1 == 8) {
      if (*(long *)(param_1 + 0x20) == 0) goto LAB_074e8724;
      lVar5 = *(long *)(param_1 + 0x38);
      if (*(int *)(DAT_095354b8 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      uVar11 = System_Type__GetTypeFromHandle(uVar11,0);
      if (lVar5 == 0) goto LAB_074e8710;
      uVar11 = System_Runtime_Serialization_SerializationInfo__GetValueNoThrow
                         (lVar5,DAT_09203448,uVar11,0);
      lVar5 = thunk_FUN_03f99350(uVar11,DAT_09180748);
      plVar4 = *(long **)(param_1 + 0x18);
      if (plVar4 == (long *)0x0) goto LAB_074e8710;
      uVar11 = (**(code **)(*plVar4 + 0x738))
                         (plVar4,*(undefined8 *)(param_1 + 0x10),8,0x4003c,
                          *(undefined8 *)(*plVar4 + 0x740));
      lVar6 = thunk_FUN_03f99350(uVar11,DAT_091802d8);
      if (lVar6 == 0) goto LAB_074e8710;
      uVar3 = (ulong)*(uint *)(lVar6 + 0x18);
      if (uVar3 == 1) {
        plVar4 = (long *)(lVar6 + 0x20);
LAB_074e866c:
        plVar13 = (long *)*plVar4;
        if (plVar13 != (long *)0x0) {
LAB_074e8674:
          uVar3 = (**(code **)(*plVar13 + 0x328))(plVar13,*(undefined8 *)(*plVar13 + 0x330));
          if (lVar5 == 0) {
            return plVar13;
          }
          if ((uVar3 & 1) == 0) {
            return plVar13;
          }
          if (*(int *)(lVar5 + 0x18) != 0) {
            uVar11 = *(undefined8 *)(lVar5 + 0x20);
            if (*(int *)(DAT_095354b8 + 0xe4) == 0) {
              FUN_03f5c424();
            }
            uVar3 = System_Type__op_Equality(uVar11,0,0);
            if ((uVar3 & 1) != 0) {
              return (long *)0x0;
            }
                    /* WARNING: Could not recover jumptable at 0x074e86f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            plVar4 = (long *)(**(code **)(*plVar13 + 0x418))
                                       (plVar13,lVar5,*(undefined8 *)(*plVar13 + 0x420));
            return plVar4;
          }
          goto LAB_074e8714;
        }
      }
      else if (1 < (int)*(uint *)(lVar6 + 0x18)) {
        uVar12 = 0;
        plVar4 = (long *)(lVar6 + 0x20);
        do {
          if (*(long *)(param_1 + 0x28) == 0) {
            if (uVar3 <= uVar12) goto LAB_074e8714;
            plVar13 = (long *)*plVar4;
            if ((plVar13 == (long *)0x0) ||
               (lVar9 = (**(code **)(*plVar13 + 0x168))(plVar13,*(undefined8 *)(*plVar13 + 0x170)),
               lVar9 == 0)) goto LAB_074e8710;
            uVar11 = *(undefined8 *)(param_1 + 0x20);
          }
          else {
            if (uVar3 <= uVar12) goto LAB_074e8714;
            if ((long *)*plVar4 == (long *)0x0) goto LAB_074e8710;
            lVar9 = *(long *)*plVar4;
            if ((*(byte *)(lVar9 + 0x130) < *(byte *)(DAT_0918a3b8 + 0x130)) ||
               (*(long *)(*(long *)(lVar9 + 200) + (ulong)*(byte *)(DAT_0918a3b8 + 0x130) * 8 + -8)
                != DAT_0918a3b8)) goto LAB_074e8718;
            lVar9 = System_Reflection_RuntimeMethodInfo__SerializationToString();
            if (lVar9 == 0) goto LAB_074e8710;
            uVar11 = *(undefined8 *)(param_1 + 0x28);
          }
          uVar3 = System_String__Equals(lVar9,uVar11,0);
          if ((uVar3 & 1) != 0) {
            if ((uint)uVar12 < *(uint *)(lVar6 + 0x18)) goto LAB_074e866c;
            goto LAB_074e8714;
          }
          if (lVar5 != 0) {
            if (*(uint *)(lVar6 + 0x18) <= uVar12) goto LAB_074e8714;
            plVar13 = (long *)*plVar4;
            if (plVar13 == (long *)0x0) goto LAB_074e8710;
            uVar3 = (**(code **)(*plVar13 + 0x318))(plVar13,*(undefined8 *)(*plVar13 + 800));
            if ((uVar3 & 1) != 0) {
              if (*(uint *)(lVar6 + 0x18) <= uVar12) goto LAB_074e8714;
              plVar13 = (long *)*plVar4;
              if ((plVar13 == (long *)0x0) ||
                 (lVar9 = (**(code **)(*plVar13 + 0x338))(plVar13,*(undefined8 *)(*plVar13 + 0x340))
                 , lVar9 == 0)) goto LAB_074e8710;
              if (*(int *)(lVar9 + 0x18) == *(int *)(lVar5 + 0x18)) {
                if (*(uint *)(lVar6 + 0x18) <= uVar12) goto LAB_074e8714;
                plVar13 = (long *)*plVar4;
                if (plVar13 == (long *)0x0) goto LAB_074e8710;
                plVar13 = (long *)(**(code **)(*plVar13 + 0x418))
                                            (plVar13,lVar5,*(undefined8 *)(*plVar13 + 0x420));
                if (*(long *)(param_1 + 0x28) == 0) {
                  if ((plVar13 == (long *)0x0) ||
                     (lVar9 = (**(code **)(*plVar13 + 0x168))
                                        (plVar13,*(undefined8 *)(*plVar13 + 0x170)), lVar9 == 0))
                  goto LAB_074e8710;
                  uVar11 = *(undefined8 *)(param_1 + 0x20);
                }
                else {
                  if (plVar13 == (long *)0x0) goto LAB_074e8710;
                  if ((*(byte *)(*plVar13 + 0x130) < *(byte *)(DAT_0918a3b8 + 0x130)) ||
                     (*(long *)(*(long *)(*plVar13 + 200) +
                                (ulong)*(byte *)(DAT_0918a3b8 + 0x130) * 8 + -8) != DAT_0918a3b8)) {
                    /* WARNING: Subroutine does not return */
                    FUN_03f5c8d0(plVar13);
                  }
                  lVar9 = System_Reflection_RuntimeMethodInfo__SerializationToString(plVar13);
                  if (lVar9 == 0) goto LAB_074e8710;
                  uVar11 = *(undefined8 *)(param_1 + 0x28);
                }
                uVar3 = System_String__Equals(lVar9,uVar11,0);
                if ((uVar3 & 1) != 0) goto LAB_074e8674;
              }
            }
          }
          uVar3 = (ulong)*(uint *)(lVar6 + 0x18);
          uVar12 = uVar12 + 1;
          plVar4 = plVar4 + 1;
        } while ((long)uVar12 < (long)(int)*(uint *)(lVar6 + 0x18));
      }
    }
    else {
      if (iVar1 != 0x10) {
LAB_074e8784:
        uVar11 = thunk_FUN_03fc39d4(&DAT_09212410);
        uVar11 = System_Environment__GetResourceString(uVar11,0);
        thunk_FUN_03fc39d4(&DAT_09181548);
        uVar10 = thunk_FUN_03f9944c();
        System_ArgumentException___ctor(uVar10,uVar11,0);
        goto LAB_074e876c;
      }
      plVar4 = *(long **)(param_1 + 0x18);
      if (plVar4 == (long *)0x0) goto LAB_074e8710;
      uVar11 = (**(code **)(*plVar4 + 0x738))
                         (plVar4,*(undefined8 *)(param_1 + 0x10),0x10,0x4003c,
                          *(undefined8 *)(*plVar4 + 0x740));
      lVar5 = thunk_FUN_03f99350(uVar11,DAT_091803c8);
      if (lVar5 == 0) goto LAB_074e8710;
      uVar3 = *(ulong *)(lVar5 + 0x18);
      if (uVar3 != 0) {
        if ((int)uVar3 == 1) goto LAB_074e8378;
        if (1 < (int)uVar3) {
          uVar12 = 0;
          do {
            bVar2 = (uVar3 & 0xffffffff) <= uVar12;
            if (*(long *)(param_1 + 0x28) == 0) {
              if (bVar2) goto LAB_074e8714;
              plVar4 = *(long **)(lVar5 + 0x20 + uVar12 * 8);
              if ((plVar4 == (long *)0x0) ||
                 (lVar6 = (**(code **)(*plVar4 + 0x168))(plVar4,*(undefined8 *)(*plVar4 + 0x170)),
                 lVar6 == 0)) goto LAB_074e8710;
              uVar11 = *(undefined8 *)(param_1 + 0x20);
            }
            else {
              if (bVar2) goto LAB_074e8714;
              plVar4 = *(long **)(lVar5 + 0x20 + uVar12 * 8);
              if (plVar4 == (long *)0x0) goto LAB_074e8710;
              if ((*(byte *)(*plVar4 + 0x130) < *(byte *)(DAT_0918a3e0 + 0x130)) ||
                 (*(long *)(*(long *)(*plVar4 + 200) + (ulong)*(byte *)(DAT_0918a3e0 + 0x130) * 8 +
                           -8) != DAT_0918a3e0)) {
LAB_074e8718:
                    /* WARNING: Subroutine does not return */
                FUN_03f5c8d0();
              }
              lVar6 = System_Reflection_RuntimePropertyInfo__FormatNameAndSig(plVar4,1);
              if (lVar6 == 0) goto LAB_074e8710;
              uVar11 = *(undefined8 *)(param_1 + 0x28);
            }
            uVar3 = System_String__Equals(lVar6,uVar11,0);
            if ((uVar3 & 1) != 0) goto LAB_074e843c;
            uVar3 = (ulong)*(uint *)(lVar5 + 0x18);
            uVar12 = uVar12 + 1;
          } while ((long)uVar12 < (long)(int)*(uint *)(lVar5 + 0x18));
        }
      }
    }
LAB_074e8608:
    uVar11 = thunk_FUN_03fc39d4(&DAT_09180318);
    uVar11 = FUN_03f5c394(uVar11,1);
    uVar10 = *(undefined8 *)(param_1 + 0x10);
    FUN_039b1d98();
    FUN_039b0da0(uVar11,uVar10);
    FUN_039af17c(uVar11,0,uVar10);
    uVar10 = thunk_FUN_03fc39d4(&DAT_091fdec8);
    uVar11 = System_Environment__GetResourceString(uVar10,uVar11,0);
  }
  thunk_FUN_03fc39d4(&DAT_0918a948);
  uVar10 = thunk_FUN_03f9944c();
  System_Runtime_Serialization_SerializationException___ctor(uVar10,uVar11,0);
LAB_074e876c:
  uVar11 = thunk_FUN_03fc39d4(&DAT_091d2e40);
                    /* WARNING: Subroutine does not return */
  FUN_03f5c414(uVar10,uVar11);
LAB_074e843c:
  if ((uint)uVar12 < *(uint *)(lVar5 + 0x18)) {
    return *(long **)(lVar5 + 0x20 + uVar12 * 8);
  }
  goto LAB_074e8714;
}

