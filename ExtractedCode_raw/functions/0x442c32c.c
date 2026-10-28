// rea decompile_all
// name: CookingGraph.IngredientQueueTranslator$$Parse
// address: 0x442c32c
// body: available
// range: 0x442c32c-0x442c8d3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x442c6d0 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x442c7dc to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x442c7e0 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x442c7e4 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x442c7e8 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x442c7ec to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x442c7f0 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x442c7f4 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x442c7f8 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x442c7fc to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x442c844 to 0x3f5c414 FUN_03f5c414 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x442c84c to 0x3f5c548 FUN_03f5c548 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verifi
// limitations_truncated: true; decompile-index.json keeps the complete list
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x0442c848) */

long CookingGraph_IngredientQueueTranslator__Parse(long param_1,long param_2)

{
  int iVar1;
  undefined4 uVar2;
  ulong uVar3;
  long lVar4;
  long *plVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  int *piVar9;
  undefined8 uVar10;
  long lVar11;
  undefined8 uVar12;
  undefined4 local_74;
  undefined8 local_70;
  long **pplStack_68;
  long *local_58;
  
  if ((DAT_09517f6f & 1) == 0) {
    FUN_03f5c2a4(&DAT_091ca968);
    FUN_03f5c2a4(&DAT_09178b08);
    FUN_03f5c2a4(&DAT_09185a58);
    FUN_03f5c2a4(&DAT_0917a6e8);
    FUN_03f5c2a4(&DAT_0917adc8);
    FUN_03f5c2a4(&DAT_09185b10);
    FUN_03f5c2a4(&DAT_091ada38);
    FUN_03f5c2a4(&DAT_091ada40);
    FUN_03f5c2a4(&DAT_09188ad0);
    FUN_03f5c2a4(&DAT_091eb9d0);
    FUN_03f5c2a4(&DAT_091917c8);
    DAT_09517f6f = 1;
  }
  local_58 = (long *)0x0;
  if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  uVar3 = UnityEngine_Object__op_Equality(param_2,0,0);
  if ((uVar3 & 1) != 0) {
    thunk_FUN_03fc39d4(&DAT_09181550);
    uVar10 = thunk_FUN_03f9944c();
    uVar12 = thunk_FUN_03fc39d4(&DAT_0921c7b8);
    System_ArgumentNullException___ctor(uVar10,uVar12,0);
    uVar12 = thunk_FUN_03fc39d4(&DAT_091cfe28);
                    /* WARNING: Subroutine does not return */
    FUN_03f5c414(uVar10,uVar12);
  }
  lVar4 = CookingGraph_IngredientQueueTranslator__Parse(param_1);
  if (lVar4 != 0) {
    uVar10 = *(undefined8 *)(lVar4 + 0x10);
    if (*(int *)(DAT_091917c8 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    puVar8 = *(undefined8 **)(DAT_091917c8 + 0xb8);
    lVar11 = puVar8[1];
    if (lVar11 == 0) {
      if (*(int *)(DAT_091917c8 + 0xe4) == 0) {
        FUN_03f5c424();
        puVar8 = *(undefined8 **)(DAT_091917c8 + 0xb8);
      }
      uVar12 = *puVar8;
      lVar11 = thunk_FUN_03f9944c(DAT_09178b08);
      FUN_05324070(lVar11,uVar12,DAT_091eb9d0,0);
      plVar5 = (long *)(*(long *)(DAT_091917c8 + 0xb8) + 8);
      *plVar5 = lVar11;
      thunk_FUN_03f5d7b8(plVar5,lVar11);
    }
    plVar5 = (long *)FUN_04afac50(uVar10,lVar11,DAT_091ca968);
    if (plVar5 != (long *)0x0) {
      lVar11 = *plVar5;
      uVar3 = (ulong)*(ushort *)(lVar11 + 0x12e);
      if (uVar3 != 0) {
        piVar9 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
        do {
          if (*(long *)(piVar9 + -2) == DAT_0917a6e8) {
            puVar8 = (undefined8 *)(lVar11 + (long)*piVar9 * 0x10 + 0x138);
            goto LAB_0442c520;
          }
          uVar3 = uVar3 - 1;
          piVar9 = piVar9 + 4;
        } while (uVar3 != 0);
      }
      puVar8 = (undefined8 *)FUN_03f95da8(plVar5,DAT_0917a6e8,0);
LAB_0442c520:
      plVar5 = (long *)(*(code *)*puVar8)(plVar5,puVar8[1]);
      pplStack_68 = &local_58;
      local_70 = 0;
      do {
        local_58 = plVar5;
        if (plVar5 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_03f5c550();
        }
        lVar11 = *plVar5;
        uVar3 = (ulong)*(ushort *)(lVar11 + 0x12e);
        if (uVar3 != 0) {
          piVar9 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
          do {
            if (*(long *)(piVar9 + -2) == DAT_09185b10) {
              puVar8 = (undefined8 *)(lVar11 + (long)*piVar9 * 0x10 + 0x138);
              goto LAB_0442c5a8;
            }
            uVar3 = uVar3 - 1;
            piVar9 = piVar9 + 4;
          } while (uVar3 != 0);
        }
        puVar8 = (undefined8 *)FUN_03f95da8(plVar5,DAT_09185b10,0);
LAB_0442c5a8:
        uVar3 = (*(code *)*puVar8)(plVar5,puVar8[1]);
        plVar5 = local_58;
        if ((uVar3 & 1) == 0) {
          if (local_58 == (long *)0x0) {
            return lVar4;
          }
          lVar11 = *local_58;
          uVar3 = (ulong)*(ushort *)(lVar11 + 0x12e);
          if (uVar3 == 0) goto LAB_0442c71c;
          piVar9 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
          goto LAB_0442c704;
        }
        if (local_58 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_03f5c550();
        }
        lVar11 = *local_58;
        uVar3 = (ulong)*(ushort *)(lVar11 + 0x12e);
        if (uVar3 != 0) {
          piVar9 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
          do {
            if (*(long *)(piVar9 + -2) == DAT_0917adc8) {
              puVar8 = (undefined8 *)(lVar11 + (long)*piVar9 * 0x10 + 0x138);
              goto LAB_0442c60c;
            }
            uVar3 = uVar3 - 1;
            piVar9 = piVar9 + 4;
          } while (uVar3 != 0);
        }
        puVar8 = (undefined8 *)FUN_03f95da8(local_58,DAT_0917adc8,0);
LAB_0442c60c:
        lVar11 = (*(code *)*puVar8)(plVar5,puVar8[1]);
        if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_03f5c550();
        }
        if (*(int *)(lVar11 + 0x10) == 0) {
          iVar1 = *(int *)(lVar11 + 0x14);
          *(int *)(lVar11 + 0x1c) = iVar1;
          if (iVar1 < 0) {
LAB_0442c76c:
            lVar4 = thunk_FUN_03fc39d4(&DAT_09182ff8);
            if (*(int *)(lVar4 + 0xe4) == 0) {
              FUN_03f5c424();
            }
            uVar10 = System_Globalization_CultureInfo__get_InvariantCulture(0);
            uVar10 = System_Int32__ToString(lVar11 + 0x14,uVar10,0);
            local_74 = *(undefined4 *)(lVar11 + 0x1c);
            uVar12 = FUN_03f5c42c(DAT_09535420,&local_74);
            uVar7 = thunk_FUN_03fc39d4(&DAT_09204b08);
            uVar12 = System_String__Format(uVar7,uVar12,0);
            if (param_1 != 0) {
              uVar2 = System_String__IndexOf(param_1,uVar10,4,0);
              lVar4 = thunk_FUN_03fc39d4(&DAT_09187e80);
              if (*(int *)(lVar4 + 0xe4) == 0) {
                FUN_03f5c424();
              }
              uVar2 = System_Math__Max(0,uVar2,0);
              thunk_FUN_03fc39d4(&DAT_09182d98);
              uVar10 = thunk_FUN_03f9944c();
              CookingGraph_CookingGraphFormatException___ctor(uVar10,uVar12,uVar2,param_1);
              uVar12 = thunk_FUN_03fc39d4(&DAT_091cfe28);
                    /* WARNING: Subroutine does not return */
              FUN_03f5c414(uVar10,uVar12);
            }
                    /* WARNING: Subroutine does not return */
            FUN_03f5c550();
          }
          if (param_2 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_03f5c550();
          }
          if (*(long *)(param_2 + 0x30) == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_03f5c550();
          }
          lVar6 = *(long *)(*(long *)(param_2 + 0x30) + 0x10);
          if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_03f5c550();
          }
          if (*(int *)(lVar6 + 0x18) <= iVar1) goto LAB_0442c76c;
          uVar10 = FUN_057e0998(lVar6,iVar1,DAT_091ada40);
          if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
            FUN_03f5c424();
          }
          uVar3 = UnityEngine_Object__op_Equality(uVar10,0,0);
          if ((uVar3 & 1) != 0) goto LAB_0442c76c;
          if (*(long *)(param_2 + 0x30) == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_03f5c550();
          }
          lVar6 = *(long *)(*(long *)(param_2 + 0x30) + 0x10);
          if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_03f5c550();
          }
          uVar10 = FUN_057e0998(lVar6,*(undefined4 *)(lVar11 + 0x1c),DAT_091ada40);
          *(undefined8 *)(lVar11 + 0x20) = uVar10;
          thunk_FUN_03f5d7b8((undefined8 *)(lVar11 + 0x20));
          plVar5 = local_58;
        }
        else {
          *(undefined8 *)(lVar11 + 0x20) = 0;
          *(undefined4 *)(lVar11 + 0x1c) = 0xffffffff;
          thunk_FUN_03f5d7b8((undefined8 *)(lVar11 + 0x20),0);
          plVar5 = local_58;
        }
      } while( true );
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
  while( true ) {
    uVar3 = uVar3 - 1;
    piVar9 = piVar9 + 4;
    if (uVar3 == 0) break;
LAB_0442c704:
    if (*(long *)(piVar9 + -2) == DAT_09185a58) {
      puVar8 = (undefined8 *)(lVar11 + (long)*piVar9 * 0x10 + 0x138);
      goto LAB_0442c738;
    }
  }
LAB_0442c71c:
  puVar8 = (undefined8 *)FUN_03f95da8(local_58,DAT_09185a58,0);
LAB_0442c738:
  (*(code *)*puVar8)(plVar5,puVar8[1]);
  return lVar4;
}

