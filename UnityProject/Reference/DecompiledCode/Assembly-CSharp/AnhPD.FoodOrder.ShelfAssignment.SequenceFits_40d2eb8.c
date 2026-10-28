// rea decompile_all
// name: AnhPD.FoodOrder.ShelfAssignment$$SequenceFits
// address: 0x40d2eb8
// body: available
// range: 0x40d2eb8-0x40d322b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8
AnhPD_FoodOrder_ShelfAssignment__SequenceFits
          (long param_1,long *param_2,int param_3,long *param_4,int param_5,long *param_6)

{
  int iVar1;
  undefined4 uVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  ulong uVar7;
  int *piVar8;
  
  if ((DAT_09515fe8 & 1) == 0) {
    FUN_03f5c2a4(&DAT_0917b378);
    FUN_03f5c2a4(&DAT_0917b3d8);
    FUN_03f5c2a4(&DAT_0917b570);
    FUN_03f5c2a4(&DAT_0917b510);
    DAT_09515fe8 = 1;
  }
  if (param_1 == 0) {
    return 1;
  }
  if (param_2 == (long *)0x0) {
LAB_040d2fdc:
    uVar4 = 0;
  }
  else {
    lVar5 = *param_2;
    uVar7 = (ulong)*(ushort *)(lVar5 + 0x12e);
    if (uVar7 != 0) {
      piVar8 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      do {
        if (*(long *)(piVar8 + -2) == DAT_0917b3d8) {
          puVar3 = (undefined8 *)(lVar5 + (long)*piVar8 * 0x10 + 0x138);
          goto LAB_040d2f80;
        }
        uVar7 = uVar7 - 1;
        piVar8 = piVar8 + 4;
      } while (uVar7 != 0);
    }
    puVar3 = (undefined8 *)FUN_03f95da8(param_2,DAT_0917b3d8,0);
LAB_040d2f80:
    iVar1 = (*(code *)*puVar3)(param_2,puVar3[1]);
    if (iVar1 <= param_3) goto LAB_040d2fdc;
    lVar5 = *param_2;
    uVar7 = (ulong)*(ushort *)(lVar5 + 0x12e);
    if (uVar7 != 0) {
      piVar8 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      do {
        if (*(long *)(piVar8 + -2) == DAT_0917b570) {
          puVar3 = (undefined8 *)(lVar5 + (long)*piVar8 * 0x10 + 0x138);
          goto LAB_040d2ff4;
        }
        uVar7 = uVar7 - 1;
        piVar8 = piVar8 + 4;
      } while (uVar7 != 0);
    }
    puVar3 = (undefined8 *)FUN_03f95da8(param_2,DAT_0917b570,0);
LAB_040d2ff4:
    uVar4 = (*(code *)*puVar3)(param_2,param_3,puVar3[1]);
  }
  lVar5 = 0;
  if (param_4 != (long *)0x0) {
    lVar5 = *param_4;
    uVar7 = (ulong)*(ushort *)(lVar5 + 0x12e);
    if (uVar7 != 0) {
      piVar8 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      do {
        if (*(long *)(piVar8 + -2) == DAT_0917b3d8) {
          puVar3 = (undefined8 *)(lVar5 + (long)*piVar8 * 0x10 + 0x138);
          goto LAB_040d3060;
        }
        uVar7 = uVar7 - 1;
        piVar8 = piVar8 + 4;
      } while (uVar7 != 0);
    }
    puVar3 = (undefined8 *)FUN_03f95da8(param_4,DAT_0917b3d8,0);
LAB_040d3060:
    iVar1 = (*(code *)*puVar3)(param_4,puVar3[1]);
    if (param_5 < iVar1) {
      lVar5 = *param_4;
      uVar7 = (ulong)*(ushort *)(lVar5 + 0x12e);
      if (uVar7 != 0) {
        piVar8 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
        do {
          if (*(long *)(piVar8 + -2) == DAT_0917b570) {
            puVar3 = (undefined8 *)(lVar5 + (long)*piVar8 * 0x10 + 0x138);
            goto LAB_040d30d0;
          }
          uVar7 = uVar7 - 1;
          piVar8 = piVar8 + 4;
        } while (uVar7 != 0);
      }
      puVar3 = (undefined8 *)FUN_03f95da8(param_4,DAT_0917b570,0);
LAB_040d30d0:
      lVar5 = (*(code *)*puVar3)(param_4,param_5,puVar3[1]);
    }
    else {
      lVar5 = 0;
    }
  }
  uVar7 = System_String__IsNullOrEmpty(uVar4,0);
  if ((uVar7 & 1) != 0) {
    return 1;
  }
  if (param_6 != (long *)0x0) {
    lVar6 = *param_6;
    uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
    if (uVar7 != 0) {
      piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
      do {
        if (*(long *)(piVar8 + -2) == DAT_0917b378) {
          puVar3 = (undefined8 *)(lVar6 + (long)*piVar8 * 0x10 + 0x138);
          goto LAB_040d3164;
        }
        uVar7 = uVar7 - 1;
        piVar8 = piVar8 + 4;
      } while (uVar7 != 0);
    }
    puVar3 = (undefined8 *)FUN_03f95da8(param_6,DAT_0917b378,0);
LAB_040d3164:
    iVar1 = (*(code *)*puVar3)(param_6,puVar3[1]);
    if (param_5 < iVar1) {
      lVar6 = *param_6;
      uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
      if (uVar7 != 0) {
        piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
        do {
          if (*(long *)(piVar8 + -2) == DAT_0917b510) {
            puVar3 = (undefined8 *)(lVar6 + (long)*piVar8 * 0x10 + 0x138);
            goto LAB_040d3210;
          }
          uVar7 = uVar7 - 1;
          piVar8 = piVar8 + 4;
        } while (uVar7 != 0);
      }
      puVar3 = (undefined8 *)FUN_03f95da8(param_6,DAT_0917b510,0);
LAB_040d3210:
      uVar2 = (*(code *)*puVar3)(param_6,param_5,puVar3[1]);
      goto joined_r0x040d31c4;
    }
  }
  uVar2 = 0xffffffff;
joined_r0x040d31c4:
  if (lVar5 == 0) {
    lVar5 = **(long **)(DAT_09535468 + 0xb8);
  }
                    /* WARNING: Could not recover jumptable at 0x040d3200. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar4 = (**(code **)(param_1 + 0x18))
                    (*(undefined8 *)(param_1 + 0x40),uVar2,uVar4,lVar5,
                     *(undefined8 *)(param_1 + 0x28));
  return uVar4;
}

