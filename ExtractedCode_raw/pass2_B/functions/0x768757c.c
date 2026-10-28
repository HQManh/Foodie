// rea decompile_all
// name: Newtonsoft.Json.Utilities.CollectionUtils$$ResolveEnumerableCollectionConstructor
// address: 0x768757c
// body: available
// range: 0x768757c-0x76878a3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x7687890 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x7687894 to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x76878a0 to 0x3f5c414 FUN_03f5c414 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


long * Newtonsoft_Json_Utilities_CollectionUtils__ResolveEnumerableCollectionConstructor
                 (long *param_1,long param_2,undefined8 param_3)

{
  uint uVar1;
  int iVar2;
  long *plVar3;
  long *plVar4;
  long lVar5;
  undefined8 uVar6;
  long *plVar7;
  undefined8 *puVar8;
  long lVar9;
  ulong uVar10;
  int *piVar11;
  long *plVar12;
  uint uVar13;
  
  if ((DAT_09522559 & 1) == 0) {
    FUN_03f5c2a4(&DAT_09182ac0);
    FUN_03f5c2a4(&DAT_0917a100);
    FUN_03f5c2a4(&DAT_09171bc0);
    FUN_03f5c2a4(&DAT_0917b0e0);
    FUN_03f5c2a4(&DAT_09180748);
    DAT_09522559 = 1;
  }
  uVar6 = DAT_09171bc0;
  if (*(int *)(DAT_095354b8 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  plVar3 = (long *)System_Type__GetTypeFromHandle(uVar6,0);
  plVar4 = (long *)FUN_03f5c394(DAT_09180748,1);
  if (plVar4 != (long *)0x0) {
    if ((param_2 != 0) &&
       (lVar5 = thunk_FUN_03f99350(param_2,*(undefined8 *)(*plVar4 + 0x40)), lVar5 == 0)) {
      uVar6 = thunk_FUN_03fa6ef4();
                    /* WARNING: Subroutine does not return */
      FUN_03f5c414(uVar6,0);
    }
    if ((int)plVar4[3] == 0) {
LAB_07687894:
                    /* WARNING: Subroutine does not return */
      FUN_03f5c558();
    }
    plVar4[4] = param_2;
    thunk_FUN_03f5d7b8(plVar4 + 4,param_2);
    if (((plVar3 != (long *)0x0) &&
        (uVar6 = (**(code **)(*plVar3 + 0x948))(plVar3,plVar4,*(undefined8 *)(*plVar3 + 0x950)),
        param_1 != (long *)0x0)) &&
       (lVar5 = (**(code **)(*param_1 + 0x6a8))(param_1,0x14,*(undefined8 *)(*param_1 + 0x6b0)),
       lVar5 != 0)) {
      uVar1 = *(uint *)(lVar5 + 0x18);
      if ((int)uVar1 < 1) {
        plVar3 = (long *)0x0;
      }
      else {
        uVar13 = 0;
        plVar4 = (long *)0x0;
        do {
          if (uVar1 <= uVar13) goto LAB_07687894;
          plVar12 = *(long **)(lVar5 + (long)(int)uVar13 * 8 + 0x20);
          if ((plVar12 == (long *)0x0) ||
             (plVar7 = (long *)(**(code **)(*plVar12 + 600))
                                         (plVar12,*(undefined8 *)(*plVar12 + 0x260)),
             plVar7 == (long *)0x0)) goto LAB_07687890;
          lVar9 = *plVar7;
          uVar10 = (ulong)*(ushort *)(lVar9 + 0x12e);
          if (uVar10 != 0) {
            piVar11 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
            do {
              if (*(long *)(piVar11 + -2) == DAT_0917a100) {
                puVar8 = (undefined8 *)(lVar9 + (long)*piVar11 * 0x10 + 0x138);
                goto LAB_07687760;
              }
              uVar10 = uVar10 - 1;
              piVar11 = piVar11 + 4;
            } while (uVar10 != 0);
          }
          puVar8 = (undefined8 *)FUN_03f95da8(plVar7,DAT_0917a100,0);
LAB_07687760:
          iVar2 = (*(code *)*puVar8)(plVar7,puVar8[1]);
          plVar3 = plVar4;
          if (iVar2 == 1) {
            lVar9 = *plVar7;
            uVar10 = (ulong)*(ushort *)(lVar9 + 0x12e);
            if (uVar10 != 0) {
              piVar11 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
              do {
                if (*(long *)(piVar11 + -2) == DAT_0917b0e0) {
                  puVar8 = (undefined8 *)(lVar9 + (long)*piVar11 * 0x10 + 0x138);
                  goto LAB_076877c0;
                }
                uVar10 = uVar10 - 1;
                piVar11 = piVar11 + 4;
              } while (uVar10 != 0);
            }
            puVar8 = (undefined8 *)FUN_03f95da8(plVar7,DAT_0917b0e0,0);
LAB_076877c0:
            plVar7 = (long *)(*(code *)*puVar8)(plVar7,0,puVar8[1]);
            if (plVar7 == (long *)0x0) goto LAB_07687890;
            plVar7 = (long *)(**(code **)(*plVar7 + 0x1e8))(plVar7,*(undefined8 *)(*plVar7 + 0x1f0))
            ;
            if (*(int *)(DAT_095354b8 + 0xe4) == 0) {
              FUN_03f5c424(DAT_095354b8);
            }
            uVar10 = System_Type__op_Equality(uVar6,plVar7,0);
            if ((uVar10 & 1) != 0) {
              return plVar12;
            }
            if (*(int *)(DAT_09182ac0 + 0xe4) == 0) {
              FUN_03f5c424();
            }
            uVar10 = System_Reflection_ConstructorInfo__op_Equality(plVar4,0,0);
            if ((uVar10 & 1) != 0) {
              if (plVar7 == (long *)0x0) goto LAB_07687890;
              uVar10 = (**(code **)(*plVar7 + 0x2b8))
                                 (plVar7,param_3,*(undefined8 *)(*plVar7 + 0x2c0));
              plVar3 = plVar12;
              if ((uVar10 & 1) == 0) {
                plVar3 = plVar4;
              }
            }
          }
          uVar1 = *(uint *)(lVar5 + 0x18);
          uVar13 = uVar13 + 1;
          plVar4 = plVar3;
        } while ((int)uVar13 < (int)uVar1);
      }
      return plVar3;
    }
  }
LAB_07687890:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

