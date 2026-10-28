// rea decompile_all
// name: CookingGraph.CookingGraphPreservation$$Collect
// address: 0x4409624
// body: available
// range: 0x4409624-0x4409ba7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x4409b98 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x4409b9c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x4409ba0 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x4409ba4 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void CookingGraph_CookingGraphPreservation__Collect
               (long param_1,long *param_2,long *param_3,long *param_4,long *param_5)

{
  ulong uVar1;
  undefined8 *puVar2;
  long lVar3;
  undefined8 *puVar4;
  int *piVar5;
  undefined8 uVar6;
  undefined8 local_b8;
  undefined8 *puStack_b0;
  long local_a8;
  undefined8 local_a0;
  undefined8 *puStack_98;
  long local_90;
  undefined8 local_80;
  undefined8 *puStack_78;
  long local_70;
  
  if ((DAT_09517ec3 & 1) == 0) {
    FUN_03f5c2a4(&DAT_091828a0);
    FUN_03f5c2a4(&DAT_091a3ad0);
    FUN_03f5c2a4(&DAT_091a3a58);
    FUN_03f5c2a4(&DAT_091a3a60);
    FUN_03f5c2a4(&DAT_091a3ad8);
    FUN_03f5c2a4(&DAT_091a3ae0);
    FUN_03f5c2a4(&DAT_091a3a68);
    FUN_03f5c2a4(&DAT_09184f18);
    FUN_03f5c2a4(&DAT_0917a0a8);
    FUN_03f5c2a4(&DAT_0917a018);
    FUN_03f5c2a4(&DAT_0917b5c8);
    FUN_03f5c2a4(&DAT_0917b5d0);
    FUN_03f5c2a4(&DAT_09186c00);
    FUN_03f5c2a4(&DAT_091aea30);
    FUN_03f5c2a4(&DAT_091aebe8);
    FUN_03f5c2a4(&DAT_09188ad0);
    DAT_09517ec3 = 1;
  }
  local_80 = 0;
  puStack_78 = (undefined8 *)0x0;
  local_70 = 0;
  local_a0 = 0;
  puStack_98 = (undefined8 *)0x0;
  local_90 = 0;
  if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  uVar1 = UnityEngine_Object__op_Equality(param_2,0,0);
  if ((uVar1 & 1) != 0) {
    return;
  }
  if (param_5 == (long *)0x0) goto LAB_04409b98;
  lVar3 = *param_5;
  uVar1 = (ulong)*(ushort *)(lVar3 + 0x12e);
  if (uVar1 != 0) {
    piVar5 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
    do {
      if (*(long *)(piVar5 + -2) == DAT_0917b5c8) {
        puVar2 = (undefined8 *)(lVar3 + (long)*piVar5 * 0x10 + 0x138);
        goto LAB_044097bc;
      }
      uVar1 = uVar1 - 1;
      piVar5 = piVar5 + 4;
    } while (uVar1 != 0);
  }
  puVar2 = (undefined8 *)FUN_03f95da8(param_5,DAT_0917b5c8,0);
LAB_044097bc:
  uVar1 = (*(code *)*puVar2)(param_5,param_2,puVar2[1]);
  if ((uVar1 & 1) == 0) {
    return;
  }
  if (param_2 == (long *)0x0) goto LAB_04409b10;
  lVar3 = *param_2;
  if (lVar3 == DAT_09186c00) {
    if (param_4 == (long *)0x0) goto LAB_04409b98;
    lVar3 = *param_4;
    uVar1 = (ulong)*(ushort *)(lVar3 + 0x12e);
    if (uVar1 != 0) {
      piVar5 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
      do {
        if (*(long *)(piVar5 + -2) == DAT_0917b5d0) {
          puVar2 = (undefined8 *)(lVar3 + (long)*piVar5 * 0x10 + 0x138);
          goto LAB_04409a90;
        }
        uVar1 = uVar1 - 1;
        piVar5 = piVar5 + 4;
      } while (uVar1 != 0);
    }
    puVar2 = (undefined8 *)FUN_03f95da8(param_4,DAT_0917b5d0,0);
LAB_04409a90:
    uVar1 = (*(code *)*puVar2)(param_4,param_2,puVar2[1]);
    if ((uVar1 & 1) != 0) {
      if (param_3 == (long *)0x0) goto LAB_04409b98;
      lVar3 = *param_3;
      uVar1 = (ulong)*(ushort *)(lVar3 + 0x12e);
      if (uVar1 != 0) {
        piVar5 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
        do {
          if (*(long *)(piVar5 + -2) == DAT_0917a0a8) {
            puVar2 = (undefined8 *)(lVar3 + (long)(*piVar5 + 2) * 0x10 + 0x138);
            goto LAB_04409b00;
          }
          uVar1 = uVar1 - 1;
          piVar5 = piVar5 + 4;
        } while (uVar1 != 0);
      }
      puVar2 = (undefined8 *)FUN_03f95da8(param_3,DAT_0917a0a8,2);
LAB_04409b00:
      (*(code *)*puVar2)(param_3,param_2,puVar2[1]);
    }
  }
  else {
    if (lVar3 == DAT_09184f18) {
      if ((param_1 == 0) || (*(long *)(param_1 + 0xb0) == 0)) goto LAB_04409b98;
      FUN_057e185c(&local_b8,*(long *)(param_1 + 0xb0),DAT_091aebe8);
      puStack_78 = puStack_b0;
      local_80 = local_b8;
      local_70 = local_a8;
      local_b8 = 0;
      puStack_b0 = &local_80;
      while (uVar1 = FUN_071bd28c(&local_80,DAT_091a3ad8), lVar3 = local_70, (uVar1 & 1) != 0) {
        if (local_70 == 0) {
          uVar6 = 0;
        }
        else {
          uVar6 = *(undefined8 *)(local_70 + 0x10);
        }
        if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
          FUN_03f5c424();
        }
        uVar1 = UnityEngine_Object__op_Equality(uVar6,param_2,0);
        if ((uVar1 & 1) != 0) {
          if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_03f5c550();
          }
          CookingGraph_CookingGraphPreservation__Collect
                    (param_1,*(undefined8 *)(lVar3 + 0x18),param_3,param_4,param_5);
        }
      }
      puVar2 = &local_80;
      puVar4 = &DAT_091a3ad0;
    }
    else {
      if (lVar3 != DAT_091828a0) goto LAB_04409b10;
      if ((param_1 == 0) || (*(long *)(param_1 + 0xa0) == 0)) {
LAB_04409b98:
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      FUN_057e185c(&local_b8,*(long *)(param_1 + 0xa0),DAT_091aea30);
      puStack_98 = puStack_b0;
      local_a0 = local_b8;
      local_90 = local_a8;
      local_b8 = 0;
      puStack_b0 = &local_a0;
      while (uVar1 = FUN_071bd28c(&local_a0,DAT_091a3a60), lVar3 = local_90, (uVar1 & 1) != 0) {
        if (local_90 == 0) {
          uVar6 = 0;
        }
        else {
          uVar6 = *(undefined8 *)(local_90 + 0x10);
        }
        if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
          FUN_03f5c424();
        }
        uVar1 = UnityEngine_Object__op_Equality(uVar6,param_2,0);
        if ((uVar1 & 1) != 0) {
          if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_03f5c550();
          }
          CookingGraph_CookingGraphPreservation__Collect
                    (param_1,*(undefined8 *)(lVar3 + 0x18),param_3,param_4,param_5);
        }
      }
      FUN_071bd288(&local_a0,DAT_091a3a58);
      if (*(long *)(param_1 + 0xa8) == 0) goto LAB_04409b98;
      FUN_057e185c(&local_b8,*(long *)(param_1 + 0xa8),DAT_091aea30);
      local_90 = local_a8;
      puStack_98 = puStack_b0;
      local_a0 = local_b8;
      local_b8 = 0;
      puStack_b0 = &local_a0;
      while (uVar1 = FUN_071bd28c(&local_a0,DAT_091a3a60), lVar3 = local_90, (uVar1 & 1) != 0) {
        if (local_90 == 0) {
          uVar6 = 0;
        }
        else {
          uVar6 = *(undefined8 *)(local_90 + 0x10);
        }
        if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
          FUN_03f5c424();
        }
        uVar1 = UnityEngine_Object__op_Equality(uVar6,param_2,0);
        if ((uVar1 & 1) != 0) {
          if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_03f5c550();
          }
          CookingGraph_CookingGraphPreservation__Collect
                    (param_1,*(undefined8 *)(lVar3 + 0x18),param_3,param_4,param_5);
        }
      }
      puVar2 = &local_a0;
      puVar4 = &DAT_091a3a58;
    }
    FUN_071bd288(puVar2,*puVar4);
  }
LAB_04409b10:
  lVar3 = *param_5;
  uVar1 = (ulong)*(ushort *)(lVar3 + 0x12e);
  if (uVar1 != 0) {
    piVar5 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
    do {
      if (*(long *)(piVar5 + -2) == DAT_0917a018) {
        puVar2 = (undefined8 *)(lVar3 + (long)(*piVar5 + 6) * 0x10 + 0x138);
        goto LAB_04409b68;
      }
      uVar1 = uVar1 - 1;
      piVar5 = piVar5 + 4;
    } while (uVar1 != 0);
  }
  puVar2 = (undefined8 *)FUN_03f95da8(param_5,DAT_0917a018,6);
LAB_04409b68:
  (*(code *)*puVar2)(param_5,param_2,puVar2[1]);
  return;
}

