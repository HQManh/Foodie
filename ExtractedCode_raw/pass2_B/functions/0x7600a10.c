// rea decompile_all
// name: System.Delegate$$GetCandidateMethod
// address: 0x7600a10
// body: available
// range: 0x7600a10-0x7600e5f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x7600d44 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x7600d48 to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x7600d54 to 0x3f5c414 FUN_03f5c414 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x7600df0 to 0x3f5c414 FUN_03f5c414 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x7600e5c to 0x3f5c414 FUN_03f5c414 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


long * System_Delegate__GetCandidateMethod
                 (long *param_1,long *param_2,long param_3,uint param_4,ulong param_5,uint param_6)

{
  uint uVar1;
  ulong uVar2;
  undefined8 uVar3;
  long *plVar4;
  long lVar5;
  long *plVar6;
  long *plVar7;
  long lVar8;
  long lVar9;
  undefined8 uVar10;
  undefined8 *puVar11;
  long lVar12;
  uint uVar13;
  
  if ((DAT_09521fd5 & 1) == 0) {
    FUN_03f5c2a4(&DAT_091c0298);
    FUN_03f5c2a4(&DAT_091724e8);
    FUN_03f5c2a4(&DAT_09180748);
    FUN_03f5c2a4(&DAT_09205c90);
    DAT_09521fd5 = 1;
  }
  if (*(int *)(DAT_095354b8 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  uVar2 = System_Type__op_Equality(param_1,0,0);
  uVar3 = DAT_091724e8;
  if ((uVar2 & 1) == 0) {
    if (param_3 != 0) {
      if (*(int *)(DAT_095354b8 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      uVar3 = System_Type__GetTypeFromHandle(uVar3,0);
      if (param_1 == (long *)0x0) {
LAB_07600d44:
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      uVar2 = (**(code **)(*param_1 + 0x2a8))(param_1,uVar3,*(undefined8 *)(*param_1 + 0x2b0));
      if ((uVar2 & 1) != 0) {
        plVar4 = (long *)System_Type__GetMethod(param_1,DAT_09205c90,0);
        if ((plVar4 != (long *)0x0) &&
           (lVar5 = (**(code **)(*plVar4 + 0x398))(plVar4,*(undefined8 *)(*plVar4 + 0x3a0)),
           lVar5 != 0)) {
          plVar6 = (long *)FUN_03f5c394(DAT_09180748,*(undefined4 *)(lVar5 + 0x18));
          uVar1 = *(uint *)(lVar5 + 0x18);
          if (0 < (int)uVar1) {
            uVar13 = 0;
            lVar12 = 0x20;
            do {
              if (uVar1 <= uVar13) {
LAB_07600d48:
                    /* WARNING: Subroutine does not return */
                FUN_03f5c558();
              }
              plVar7 = *(long **)(lVar5 + lVar12);
              if ((plVar7 == (long *)0x0) ||
                 (lVar8 = (**(code **)(*plVar7 + 0x1e8))(plVar7,*(undefined8 *)(*plVar7 + 0x1f0)),
                 plVar6 == (long *)0x0)) goto LAB_07600d44;
              if ((lVar8 != 0) &&
                 (lVar9 = thunk_FUN_03f99350(lVar8,*(undefined8 *)(*plVar6 + 0x40)), lVar9 == 0)) {
                uVar3 = thunk_FUN_03fa6ef4();
                    /* WARNING: Subroutine does not return */
                FUN_03f5c414(uVar3,0);
              }
              if (*(uint *)(plVar6 + 3) <= uVar13) goto LAB_07600d48;
              *(long *)((long)plVar6 + lVar12) = lVar8;
              thunk_FUN_03f5d7b8((long)plVar6 + lVar12,lVar8);
              uVar1 = *(uint *)(lVar5 + 0x18);
              uVar13 = uVar13 + 1;
              lVar12 = lVar12 + 8;
            } while ((int)uVar13 < (int)uVar1);
          }
          uVar1 = 0x10033;
          if ((param_5 & 1) == 0) {
            uVar1 = 0x10032;
          }
          while( true ) {
            if (*(int *)(DAT_095354b8 + 0xe4) == 0) {
              FUN_03f5c424();
            }
            uVar2 = System_Type__op_Inequality(param_2,0,0);
            lVar5 = DAT_091c0298;
            if ((uVar2 & 1) == 0) break;
            lVar12 = *(long *)(DAT_091c0298 + 0x38);
            if (lVar12 == 0) {
              FUN_03f95ac8(DAT_091c0298);
              lVar12 = *(long *)(lVar5 + 0x38);
            }
            lVar12 = *(long *)(lVar12 + 0x10);
            if ((*(ushort *)(lVar12 + 0x135) & 1) == 0) {
              lVar12 = FUN_03f95a6c();
            }
            if (*(int *)(lVar12 + 0xe4) == 0) {
              FUN_03f5c424();
            }
            lVar5 = *(long *)(*(long *)(lVar5 + 0x38) + 0x10);
            if ((*(ushort *)(lVar5 + 0x135) & 1) == 0) {
              lVar5 = FUN_03f95a6c();
            }
            if (param_2 == (long *)0x0) goto LAB_07600d44;
            plVar7 = (long *)System_Type__GetMethod
                                       (param_2,param_3,uVar1 | param_4,0,plVar6,
                                        **(undefined8 **)(lVar5 + 0xb8),0);
            uVar2 = System_Reflection_MethodInfo__op_Inequality(plVar7,0,0);
            if ((uVar2 & 1) != 0) {
              uVar3 = (**(code **)(*plVar4 + 0x3f8))(plVar4,*(undefined8 *)(*plVar4 + 0x400));
              if (plVar7 == (long *)0x0) goto LAB_07600d44;
              uVar10 = (**(code **)(*plVar7 + 0x3f8))(plVar7,*(undefined8 *)(*plVar7 + 0x400));
              uVar2 = System_Delegate__return_type_match(uVar3,uVar10);
              if ((uVar2 & 1) != 0) goto LAB_07600d00;
            }
            param_2 = (long *)(**(code **)(*param_2 + 0x8a8))
                                        (param_2,*(undefined8 *)(*param_2 + 0x8b0));
          }
          plVar7 = (long *)0x0;
LAB_07600d00:
          uVar2 = System_Reflection_MethodInfo__op_Equality(plVar7,0,0);
          if (((uVar2 & 1) != 0) && ((param_6 & 1) != 0)) {
            uVar3 = thunk_FUN_03fc39d4(&DAT_091ff738);
            uVar10 = thunk_FUN_03fc39d4(&DAT_091f7b58);
            uVar3 = System_String__Concat(uVar3,param_3,uVar10,0);
            thunk_FUN_03fc39d4(&DAT_09181548);
            uVar10 = thunk_FUN_03f9944c();
            System_ArgumentException___ctor(uVar10,uVar3,0);
            uVar3 = thunk_FUN_03fc39d4(&DAT_091c8460);
                    /* WARNING: Subroutine does not return */
            FUN_03f5c414(uVar10,uVar3);
          }
          plVar4 = (long *)0x0;
          if ((uVar2 & 1) == 0) {
            plVar4 = plVar7;
          }
          return plVar4;
        }
        goto LAB_07600d44;
      }
      thunk_FUN_03fc39d4(&DAT_09181548);
      uVar3 = thunk_FUN_03f9944c();
      uVar10 = thunk_FUN_03fc39d4(&DAT_09224530);
      System_ArgumentException___ctor(uVar3,uVar10,0);
      goto LAB_07600ddc;
    }
    thunk_FUN_03fc39d4(&DAT_09181550);
    uVar3 = thunk_FUN_03f9944c();
    puVar11 = &DAT_0921f5b0;
  }
  else {
    thunk_FUN_03fc39d4(&DAT_09181550);
    uVar3 = thunk_FUN_03f9944c();
    puVar11 = &DAT_09224510;
  }
  uVar10 = thunk_FUN_03fc39d4(puVar11);
  System_ArgumentNullException___ctor(uVar3,uVar10,0);
LAB_07600ddc:
  uVar10 = thunk_FUN_03fc39d4(&DAT_091c8460);
                    /* WARNING: Subroutine does not return */
  FUN_03f5c414(uVar3,uVar10);
}

