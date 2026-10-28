// rea decompile_all
// name: AnhPD.FoodOrder.ServeShelfController$$GatherFor
// address: 0x40c6658
// body: available
// range: 0x40c6658-0x40c68b3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x40c681c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x40c68b0 to 0x89db930 <EXTERNAL>::__stack_chk_fail (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void AnhPD_FoodOrder_ServeShelfController__GatherFor
               (undefined8 *param_1,long param_2,undefined8 *param_3,undefined8 param_4)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  undefined8 uVar4;
  int iVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  char local_f0;
  undefined7 uStack_ef;
  undefined1 uStack_e8;
  undefined7 uStack_e7;
  undefined1 local_e0;
  undefined7 uStack_df;
  undefined8 uStack_d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 local_90;
  undefined7 uStack_88;
  undefined1 uStack_81;
  undefined7 uStack_80;
  undefined1 local_79;
  undefined7 uStack_78;
  long local_68;
  
  lVar1 = tpidr_el0;
  local_68 = *(long *)(lVar1 + 0x28);
  if ((DAT_09515f96 & 1) == 0) {
    FUN_03f5c2a4(&DAT_091a8600);
    FUN_03f5c2a4(&DAT_091afe50);
    FUN_03f5c2a4(&DAT_091afe58);
    FUN_03f5c2a4(&DAT_091b71b8);
    FUN_03f5c2a4(&DAT_091b71c0);
    FUN_03f5c2a4(&DAT_09188ad0);
    FUN_03f5c2a4(&DAT_09189158);
    DAT_09515f96 = 1;
  }
  lVar2 = *(long *)(param_2 + 0x90);
  local_90 = 0;
  uStack_88 = 0;
  uStack_81 = 0;
  uStack_78 = 0;
  uStack_80 = 0;
  local_79 = 0;
  if (lVar2 != 0) {
    iVar5 = 0;
    puVar6 = (undefined8 *)((ulong)&local_90 | 7);
    do {
      if (*(int *)(lVar2 + 0x18) <= iVar5) {
LAB_040c6858:
        if (*(int *)(DAT_09189158 + 0xe4) == 0) {
          FUN_03f5c424();
        }
        puVar6 = *(undefined8 **)(DAT_09189158 + 0xb8);
        uVar8 = puVar6[1];
        uVar7 = *puVar6;
        uVar4 = puVar6[2];
LAB_040c6878:
        param_1[1] = uVar8;
        *param_1 = uVar7;
        param_1[2] = uVar4;
        if (*(long *)(lVar1 + 0x28) == local_68) {
          return;
        }
        goto LAB_040c68b0;
      }
      lVar2 = FUN_057e0998(lVar2,iVar5,DAT_091afe58);
      if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
        FUN_03f5c424(DAT_09188ad0);
      }
      uVar3 = UnityEngine_Object__op_Implicit(lVar2,0);
      if ((uVar3 & 1) != 0) {
        if (lVar2 == 0) break;
        local_90 = *(undefined8 *)(lVar2 + 0x89);
        uStack_88 = (undefined7)*(undefined8 *)(lVar2 + 0x91);
        local_79 = (undefined1)*(undefined8 *)(lVar2 + 0xa0);
        uStack_78 = (undefined7)((ulong)*(undefined8 *)(lVar2 + 0xa0) >> 8);
        uStack_81 = (undefined1)*(undefined8 *)(lVar2 + 0x98);
        uStack_80 = (undefined7)((ulong)*(undefined8 *)(lVar2 + 0x98) >> 8);
        if (*(char *)(lVar2 + 0x88) != '\0') {
          uStack_e8 = (undefined1)param_3[1];
          uStack_e7 = (undefined7)((ulong)param_3[1] >> 8);
          local_f0 = (char)*param_3;
          uStack_ef = (undefined7)((ulong)*param_3 >> 8);
          local_e0 = (undefined1)param_3[2];
          uStack_df = (undefined7)((ulong)param_3[2] >> 8);
          if (*(int *)(DAT_09189158 + 0xe4) == 0) {
            FUN_03f5c424();
          }
          uStack_a8 = puVar6[1];
          local_b0 = *puVar6;
          local_a0 = puVar6[2];
          uStack_c8 = CONCAT71(uStack_e7,uStack_e8);
          local_d0 = CONCAT71(uStack_ef,local_f0);
          local_c0 = CONCAT71(uStack_df,local_e0);
          uVar3 = AnhPD_FoodOrder_PieceSet__op_Inequality(&local_b0,&local_d0,0);
          if ((uVar3 & 1) == 0) {
            if (*(long *)(param_2 + 0xe0) == 0) break;
            uVar3 = FUN_053ec72c(*(long *)(param_2 + 0xe0),lVar2,DAT_091a8600);
            if ((uVar3 & 1) != 0) {
              AnhPD_FoodOrder_ServeShelfController__PlateHas(&local_f0,param_2,lVar2,param_4);
              local_90 = CONCAT17(uStack_e8,uStack_ef);
              uStack_88 = uStack_e7;
              local_79 = (undefined1)uStack_d8;
              uStack_78 = (undefined7)((ulong)uStack_d8 >> 8);
              uStack_81 = local_e0;
              uStack_80 = uStack_df;
              if (local_f0 == '\0') goto LAB_040c6858;
              uVar8 = puVar6[1];
              uVar7 = *puVar6;
              uVar4 = puVar6[2];
              goto LAB_040c6878;
            }
          }
        }
      }
      lVar2 = *(long *)(param_2 + 0x90);
      iVar5 = iVar5 + 1;
    } while (lVar2 != 0);
  }
  if (*(long *)(lVar1 + 0x28) == local_68) {
                    /* WARNING: Subroutine does not return */
    FUN_03f5c550();
  }
LAB_040c68b0:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

