// rea decompile_all
// name: AnhPD.FoodOrder.LevelPieceBook$$SumPieces
// address: 0x41f28e8
// body: available
// range: 0x41f28e8-0x41f2c6b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x41f2ba4 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x41f2c58 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x41f2c5c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x41f2c60 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x41f2c68 to 0x3f5c548 FUN_03f5c548 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x041f2c64) */

void AnhPD_FoodOrder_LevelPieceBook__SumPieces
               (undefined8 *param_1,long param_2,long *param_3,ulong param_4)

{
  long *plVar1;
  undefined8 *puVar2;
  long lVar3;
  ulong uVar4;
  int *piVar5;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 local_80;
  long **pplStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  long *local_48;
  
  if ((DAT_09516b85 & 1) == 0) {
    FUN_03f5c2a4(&DAT_09185a58);
    FUN_03f5c2a4(&DAT_0917a4a8);
    FUN_03f5c2a4(&DAT_0917ab58);
    FUN_03f5c2a4(&DAT_09185b10);
    FUN_03f5c2a4(&DAT_09188ad0);
    FUN_03f5c2a4(&DAT_09189158);
    DAT_09516b85 = 1;
  }
  local_70 = 0;
  uStack_68 = 0;
  local_60 = 0;
  local_48 = (long *)0x0;
  if (*(int *)(DAT_09189158 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  puVar2 = *(undefined8 **)(DAT_09189158 + 0xb8);
  uStack_68 = puVar2[1];
  local_70 = *puVar2;
  local_60 = puVar2[2];
  if (param_3 != (long *)0x0) {
    lVar3 = *param_3;
    uVar4 = (ulong)*(ushort *)(lVar3 + 0x12e);
    if (uVar4 != 0) {
      piVar5 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
      do {
        if (*(long *)(piVar5 + -2) == DAT_0917a4a8) {
          puVar2 = (undefined8 *)(lVar3 + (long)*piVar5 * 0x10 + 0x138);
          goto LAB_041f2a00;
        }
        uVar4 = uVar4 - 1;
        piVar5 = piVar5 + 4;
      } while (uVar4 != 0);
    }
    puVar2 = (undefined8 *)FUN_03f95da8(param_3,DAT_0917a4a8,0);
LAB_041f2a00:
    plVar1 = (long *)(*(code *)*puVar2)(param_3,puVar2[1]);
    pplStack_78 = &local_48;
    local_80 = 0;
    do {
      local_48 = plVar1;
      if (plVar1 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      lVar3 = *plVar1;
      uVar4 = (ulong)*(ushort *)(lVar3 + 0x12e);
      if (uVar4 != 0) {
        piVar5 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
        do {
          if (*(long *)(piVar5 + -2) == DAT_09185b10) {
            puVar2 = (undefined8 *)(lVar3 + (long)*piVar5 * 0x10 + 0x138);
            goto LAB_041f2a84;
          }
          uVar4 = uVar4 - 1;
          piVar5 = piVar5 + 4;
        } while (uVar4 != 0);
      }
      puVar2 = (undefined8 *)FUN_03f95da8(plVar1,DAT_09185b10,0);
LAB_041f2a84:
      uVar4 = (*(code *)*puVar2)(plVar1,puVar2[1]);
      plVar1 = local_48;
      if ((uVar4 & 1) == 0) {
        if (local_48 == (long *)0x0) break;
        lVar3 = *local_48;
        uVar4 = (ulong)*(ushort *)(lVar3 + 0x12e);
        if (uVar4 == 0) goto LAB_041f2bf4;
        piVar5 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
        goto LAB_041f2bdc;
      }
      if (local_48 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      lVar3 = *local_48;
      uVar4 = (ulong)*(ushort *)(lVar3 + 0x12e);
      if (uVar4 != 0) {
        piVar5 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
        do {
          if (*(long *)(piVar5 + -2) == DAT_0917ab58) {
            puVar2 = (undefined8 *)(lVar3 + (long)*piVar5 * 0x10 + 0x138);
            goto LAB_041f2ae8;
          }
          uVar4 = uVar4 - 1;
          piVar5 = piVar5 + 4;
        } while (uVar4 != 0);
      }
      puVar2 = (undefined8 *)FUN_03f95da8(local_48,DAT_0917ab58,0);
LAB_041f2ae8:
      lVar3 = (*(code *)*puVar2)(plVar1,puVar2[1]);
      if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      uVar4 = UnityEngine_Object__op_Implicit(lVar3,0);
      plVar1 = local_48;
      if ((uVar4 & 1) != 0) {
        if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_03f5c550();
        }
        if ((*(char *)(lVar3 + 0x92) == '\0') &&
           (((param_4 & 1) == 0 || (*(char *)(lVar3 + 0xe9) == '\0')))) {
          if (*(long *)(param_2 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_03f5c550();
          }
          lVar3 = AnhPD_FoodOrder_LevelInfo__GetItemPieceOffer(*(long *)(param_2 + 0x10),lVar3);
          plVar1 = local_48;
          if (lVar3 != 0) {
            uStack_98 = *(undefined8 *)(lVar3 + 0x18);
            local_a0 = *(undefined8 *)(lVar3 + 0x10);
            local_90 = *(undefined8 *)(lVar3 + 0x20);
            if (*(int *)(DAT_09189158 + 0xe4) == 0) {
              FUN_03f5c424(DAT_09189158);
            }
            uStack_c8 = uStack_98;
            local_d0 = local_a0;
            local_c0 = local_90;
            AnhPD_FoodOrder_PieceSet__Add(&local_b8,&local_70,&local_d0,0);
            plVar1 = local_48;
            local_70 = local_b8;
            uStack_68 = uStack_b0;
            local_60 = local_a8;
          }
        }
      }
    } while( true );
  }
  goto LAB_041f2c2c;
  while( true ) {
    uVar4 = uVar4 - 1;
    piVar5 = piVar5 + 4;
    if (uVar4 == 0) break;
LAB_041f2bdc:
    if (*(long *)(piVar5 + -2) == DAT_09185a58) {
      puVar2 = (undefined8 *)(lVar3 + (long)*piVar5 * 0x10 + 0x138);
      goto LAB_041f2c10;
    }
  }
LAB_041f2bf4:
  puVar2 = (undefined8 *)FUN_03f95da8(local_48,DAT_09185a58,0);
LAB_041f2c10:
  (*(code *)*puVar2)(plVar1,puVar2[1]);
LAB_041f2c2c:
  param_1[1] = uStack_68;
  *param_1 = local_70;
  param_1[2] = local_60;
  return;
}

