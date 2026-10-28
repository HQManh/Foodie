// rea decompile_all
// name: AnhPD.FoodOrder.ShelfAssignment$$IsSame
// address: 0x40d322c
// body: available
// range: 0x40d322c-0x40d3473 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


uint AnhPD_FoodOrder_ShelfAssignment__IsSame(long *param_1,int param_2,undefined8 *param_3)

{
  int iVar1;
  uint uVar2;
  undefined8 *puVar3;
  long lVar4;
  ulong uVar5;
  int *piVar6;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined8 local_d0;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  if ((DAT_09515fe9 & 1) == 0) {
    FUN_03f5c2a4(&DAT_0917b2e8);
    FUN_03f5c2a4(&DAT_0917b490);
    FUN_03f5c2a4(&DAT_091b71c0);
    FUN_03f5c2a4(&DAT_091b71c8);
    FUN_03f5c2a4(&DAT_09189158);
    DAT_09515fe9 = 1;
  }
  uStack_48 = 0;
  local_50 = 0;
  uStack_38 = 0;
  uStack_40 = 0;
  if (param_1 != (long *)0x0) {
    lVar4 = *param_1;
    uVar5 = (ulong)*(ushort *)(lVar4 + 0x12e);
    if (uVar5 != 0) {
      piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      do {
        if (*(long *)(piVar6 + -2) == DAT_0917b2e8) {
          puVar3 = (undefined8 *)(lVar4 + (long)*piVar6 * 0x10 + 0x138);
          goto LAB_040d32f8;
        }
        uVar5 = uVar5 - 1;
        piVar6 = piVar6 + 4;
      } while (uVar5 != 0);
    }
    puVar3 = (undefined8 *)FUN_03f95da8(param_1,DAT_0917b2e8,0);
LAB_040d32f8:
    iVar1 = (*(code *)*puVar3)(param_1,puVar3[1]);
    if (param_2 < iVar1) {
      lVar4 = *param_1;
      uVar5 = (ulong)*(ushort *)(lVar4 + 0x12e);
      if (uVar5 != 0) {
        piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
        do {
          if (*(long *)(piVar6 + -2) == DAT_0917b490) {
            puVar3 = (undefined8 *)(lVar4 + (long)*piVar6 * 0x10 + 0x138);
            goto LAB_040d3360;
          }
          uVar5 = uVar5 - 1;
          piVar6 = piVar6 + 4;
        } while (uVar5 != 0);
      }
      puVar3 = (undefined8 *)FUN_03f95da8(param_1,DAT_0917b490,0);
LAB_040d3360:
      (*(code *)*puVar3)(&local_50,param_1,param_2,puVar3[1]);
      if ((char)local_50 != '\0') {
        lVar4 = *param_1;
        uVar5 = (ulong)*(ushort *)(lVar4 + 0x12e);
        if (uVar5 != 0) {
          piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
          do {
            if (*(long *)(piVar6 + -2) == DAT_0917b490) {
              puVar3 = (undefined8 *)(lVar4 + (long)*piVar6 * 0x10 + 0x138);
              goto LAB_040d33e4;
            }
            uVar5 = uVar5 - 1;
            piVar6 = piVar6 + 4;
          } while (uVar5 != 0);
        }
        puVar3 = (undefined8 *)FUN_03f95da8(param_1,DAT_0917b490,0);
LAB_040d33e4:
        (*(code *)*puVar3)(&local_70,param_1,param_2,puVar3[1]);
        uStack_48 = uStack_68;
        local_50 = local_70;
        uStack_38 = uStack_58;
        uStack_40 = uStack_60;
        FUN_05c33204(&local_88,&local_50,DAT_091b71c8);
        uStack_98 = param_3[1];
        local_a0 = *param_3;
        local_90 = param_3[2];
        if (*(int *)(DAT_09189158 + 0xe4) == 0) {
          FUN_03f5c424();
        }
        uStack_b8 = uStack_80;
        local_c0 = local_88;
        local_b0 = local_78;
        uStack_d8 = uStack_98;
        local_e0 = local_a0;
        local_d0 = local_90;
        uVar2 = AnhPD_FoodOrder_PieceSet__op_Equality(&local_c0,&local_e0,0);
        goto LAB_040d33c0;
      }
    }
  }
  uVar2 = 0;
LAB_040d33c0:
  return uVar2 & 1;
}

