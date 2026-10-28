// rea decompile_all
// name: thunk_FUN_03f6d130
// address: 0x75f891c
// body: available
// range: 0x75f891c-0x75f891f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 thunk_FUN_03f6d130(long param_1,long param_2,uint param_3)

{
  void *pvVar1;
  void *pvVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  ulong uVar7;
  ulong uVar8;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  byte bStack_a0;
  undefined7 uStack_9f;
  void *pvStack_98;
  void *pvStack_90;
  byte bStack_88;
  undefined7 uStack_87;
  void *pvStack_80;
  void *pvStack_78;
  void *pvStack_70;
  void *pvStack_68;
  void *pvStack_60;
  void *pvStack_48;
  void *pvStack_40;
  undefined8 uStack_38;
  
  uStack_b0 = 0;
  uStack_a8 = 0;
  uStack_b8 = 0;
  if ((*(byte *)(*(long *)(param_1 + 0x10) + 0xb) >> 5 & 1) != 0) {
    uVar5 = FUN_03f8fda8();
    goto LAB_03f6d558;
  }
  FUN_03f66604(&uStack_b8,0x10);
  if ((param_2 == 0) || (lVar3 = FUN_03f967b4(param_2), lVar3 == 0)) {
    if (((param_3 & 0xc) == 0) || ((*(uint *)(*(long *)(param_1 + 0x10) + 8) >> 0x1d & 1) != 0)) {
      lVar3 = FUN_03f984c8(DAT_09535500,0);
    }
    else {
      pvStack_70 = (void *)0x0;
      pvStack_68 = (void *)0x0;
      pvStack_60 = (void *)0x0;
      lVar4 = FUN_03fbe574(*(long *)(param_1 + 0x10),1);
      FUN_03f71224(lVar4,lVar4,param_3,&pvStack_70);
      lVar3 = lVar4;
      if ((param_3 >> 1 & 1) == 0) {
        while (lVar3 = *(long *)(lVar3 + 0x58), lVar3 != 0) {
          FUN_03f71224(lVar3,lVar4,param_3,&pvStack_70);
        }
      }
      pvVar2 = pvStack_68;
      pvVar1 = pvStack_70;
      uVar7 = (long)pvStack_68 - (long)pvStack_70 >> 3;
      lVar3 = FUN_03f984c8(DAT_09535500,uVar7);
      if (pvVar2 != pvVar1) {
        uVar8 = 0;
        puVar6 = (undefined8 *)(lVar3 + 0x20);
        if (uVar7 < 2) {
          uVar7 = 1;
        }
        do {
          uVar5 = FUN_03f9a9c4(lVar4,*(undefined8 *)((long)pvStack_70 + uVar8 * 8));
          *puVar6 = uVar5;
          FUN_03f5d7b8(puVar6);
          uVar8 = uVar8 + 1;
          puVar6 = puVar6 + 1;
        } while (uVar7 != uVar8);
      }
      if (pvStack_70 != (void *)0x0) {
        pvStack_68 = pvStack_70;
        pvStack_78 = pvStack_70;
        goto LAB_03f6d518;
      }
    }
  }
  else {
    if ((param_3 & 1) == 0) {
      FUN_03f926e8(&bStack_a0,lVar3 + 0x14);
      if ((bStack_a0 & 1) == 0) {
        pvStack_70 = (void *)CONCAT71(uStack_9f,bStack_a0);
        pvStack_68 = pvStack_98;
        pvStack_60 = pvStack_90;
      }
      else {
        FUN_03f5d0a4(&pvStack_70,pvStack_90,pvStack_98);
      }
      if (((param_3 & 0xc) == 0) || ((*(uint *)(*(long *)(param_1 + 0x10) + 8) >> 0x1d & 1) != 0)) {
        lVar3 = FUN_03f984c8(DAT_09535500,0);
      }
      else {
        pvStack_48 = (void *)0x0;
        pvStack_40 = (void *)0x0;
        uStack_38 = 0;
        lVar4 = FUN_03fbe574(*(long *)(param_1 + 0x10),1);
        FUN_03f71544(lVar4,lVar4,param_3,&pvStack_48,&pvStack_70);
        lVar3 = lVar4;
        if ((param_3 >> 1 & 1) == 0) {
          while (lVar3 = *(long *)(lVar3 + 0x58), lVar3 != 0) {
            FUN_03f71544(lVar3,lVar4,param_3,&pvStack_48,&pvStack_70);
          }
        }
        pvVar2 = pvStack_40;
        pvVar1 = pvStack_48;
        uVar7 = (long)pvStack_40 - (long)pvStack_48 >> 3;
        lVar3 = FUN_03f984c8(DAT_09535500,uVar7);
        if (pvVar2 != pvVar1) {
          uVar8 = 0;
          puVar6 = (undefined8 *)(lVar3 + 0x20);
          if (uVar7 < 2) {
            uVar7 = 1;
          }
          do {
            uVar5 = FUN_03f9a9c4(lVar4,*(undefined8 *)((long)pvStack_48 + uVar8 * 8));
            *puVar6 = uVar5;
            FUN_03f5d7b8(puVar6);
            uVar8 = uVar8 + 1;
            puVar6 = puVar6 + 1;
          } while (uVar7 != uVar8);
        }
        if (pvStack_48 != (void *)0x0) {
          pvStack_40 = pvStack_48;
          operator_delete(pvStack_48);
        }
      }
      pvStack_78 = pvStack_90;
      bStack_88 = bStack_a0;
      if (((ulong)pvStack_70 & 1) != 0) {
        operator_delete(pvStack_60);
        pvStack_78 = pvStack_90;
        bStack_88 = bStack_a0;
      }
    }
    else {
      FUN_03f926e8(&bStack_88,lVar3 + 0x14);
      if ((bStack_88 & 1) == 0) {
        pvStack_70 = (void *)CONCAT71(uStack_87,bStack_88);
        pvStack_68 = pvStack_80;
        pvStack_60 = pvStack_78;
      }
      else {
        FUN_03f5d0a4(&pvStack_70,pvStack_78,pvStack_80);
      }
      if (((param_3 & 0xc) == 0) || ((*(uint *)(*(long *)(param_1 + 0x10) + 8) >> 0x1d & 1) != 0)) {
        lVar3 = FUN_03f984c8(DAT_09535500,0);
      }
      else {
        pvStack_48 = (void *)0x0;
        pvStack_40 = (void *)0x0;
        uStack_38 = 0;
        lVar4 = FUN_03fbe574(*(long *)(param_1 + 0x10),1);
        FUN_03f713a4(lVar4,lVar4,param_3,&pvStack_48,&pvStack_70);
        lVar3 = lVar4;
        if ((param_3 >> 1 & 1) == 0) {
          while (lVar3 = *(long *)(lVar3 + 0x58), lVar3 != 0) {
            FUN_03f713a4(lVar3,lVar4,param_3,&pvStack_48,&pvStack_70);
          }
        }
        pvVar2 = pvStack_40;
        pvVar1 = pvStack_48;
        uVar7 = (long)pvStack_40 - (long)pvStack_48 >> 3;
        lVar3 = FUN_03f984c8(DAT_09535500,uVar7);
        if (pvVar2 != pvVar1) {
          uVar8 = 0;
          puVar6 = (undefined8 *)(lVar3 + 0x20);
          if (uVar7 < 2) {
            uVar7 = 1;
          }
          do {
            uVar5 = FUN_03f9a9c4(lVar4,*(undefined8 *)((long)pvStack_48 + uVar8 * 8));
            *puVar6 = uVar5;
            FUN_03f5d7b8(puVar6);
            uVar8 = uVar8 + 1;
            puVar6 = puVar6 + 1;
          } while (uVar7 != uVar8);
        }
        if (pvStack_48 != (void *)0x0) {
          pvStack_40 = pvStack_48;
          operator_delete(pvStack_48);
        }
      }
      if (((ulong)pvStack_70 & 1) != 0) {
        operator_delete(pvStack_60);
      }
    }
    if ((bStack_88 & 1) != 0) {
LAB_03f6d518:
      operator_delete(pvStack_78);
    }
  }
  for (lVar4 = 4; uVar7 = FUN_03f98240(lVar3), lVar4 - 4U < (uVar7 & 0xffffffff); lVar4 = lVar4 + 1)
  {
    uVar5 = *(undefined8 *)(*(long *)(lVar3 + lVar4 * 8) + 0x18);
    puVar6 = (undefined8 *)FUN_03f665b8(&uStack_b8);
    *puVar6 = uVar5;
  }
  uVar5 = FUN_03f8fd50(&uStack_b8);
LAB_03f6d558:
  FUN_03f6521c(&uStack_b8);
  return uVar5;
}

