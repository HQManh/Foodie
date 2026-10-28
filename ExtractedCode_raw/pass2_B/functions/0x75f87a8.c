// rea decompile_all
// name: System.RuntimeType$$GetPropertiesByName_native
// address: 0x75f87a8
// body: available
// range: 0x75f87a8-0x75f87ab inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8
System_RuntimeType__GetPropertiesByName_native(long param_1,long param_2,uint param_3,int param_4)

{
  undefined8 *puVar1;
  long lVar2;
  undefined8 uVar3;
  ulong uVar4;
  undefined8 *puVar5;
  long lVar6;
  int iVar7;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  byte bStack_88;
  undefined7 uStack_87;
  undefined8 *puStack_80;
  undefined8 *puStack_78;
  undefined8 *puStack_70;
  undefined8 *puStack_68;
  undefined8 *puStack_60;
  undefined8 *puStack_48;
  undefined8 *puStack_40;
  undefined8 uStack_38;
  
  uStack_98 = 0;
  uStack_90 = 0;
  uStack_a0 = 0;
  if ((*(byte *)(*(long *)(param_1 + 0x10) + 0xb) >> 5 & 1) != 0) {
    uVar3 = FUN_03f8fda8();
    goto LAB_03f6e7cc;
  }
  FUN_03f66604(&uStack_a0,8);
  if (param_2 == 0) {
    lVar2 = 0;
  }
  else {
    lVar2 = FUN_03f967b4(param_2);
  }
  if (((param_3 & 0xc) == 0) ||
     (lVar6 = *(long *)(param_1 + 0x10), (*(uint *)(lVar6 + 8) >> 0x1d & 1) != 0)) {
    lVar2 = FUN_03f984c8(DAT_09535510,0);
  }
  else if (lVar2 == 0) {
    puStack_70 = (undefined8 *)0x0;
    puStack_68 = (undefined8 *)0x0;
    puStack_60 = (undefined8 *)0x0;
    lVar6 = FUN_03fbe574(lVar6,1);
    FUN_03f71cb4(&puStack_70,*(undefined2 *)(lVar6 + 0x122));
    FUN_03f721e4(lVar6,param_3,lVar6,&puStack_70);
    lVar2 = lVar6;
    if ((param_3 >> 1 & 1) == 0) {
      while (lVar2 = *(long *)(lVar2 + 0x58), lVar2 != 0) {
        FUN_03f721e4(lVar2,param_3,lVar6,&puStack_70);
      }
    }
    lVar2 = FUN_03f984c8(DAT_09535510,(long)puStack_68 - (long)puStack_70 >> 4);
    if (puStack_70 != puStack_68) {
      iVar7 = 0;
      puVar5 = puStack_70;
      do {
        uVar3 = FUN_03f9b524(puVar5[1],*puVar5);
        puVar1 = (undefined8 *)(lVar2 + 0x20 + (long)iVar7 * 8);
        *puVar1 = uVar3;
        FUN_03f5d7b8(puVar1);
        puVar5 = puVar5 + 2;
        iVar7 = iVar7 + 1;
      } while (puVar5 != puStack_68);
    }
    if (puStack_70 != (undefined8 *)0x0) {
      puStack_68 = puStack_70;
      puStack_78 = puStack_70;
      goto LAB_03f6e78c;
    }
  }
  else {
    if (param_4 == 2) {
      FUN_03f926e8(&bStack_88,lVar2 + 0x14);
      if ((bStack_88 & 1) == 0) {
        puStack_70 = (undefined8 *)CONCAT71(uStack_87,bStack_88);
        puStack_68 = puStack_80;
        puStack_60 = puStack_78;
      }
      else {
        FUN_03f5d0a4(&puStack_70,puStack_78,puStack_80);
      }
      puStack_48 = (undefined8 *)0x0;
      puStack_40 = (undefined8 *)0x0;
      uStack_38 = 0;
      lVar6 = FUN_03fbe574(lVar6,1);
      FUN_03f71cb4(&puStack_48,*(undefined2 *)(lVar6 + 0x122));
      FUN_03f71d4c(lVar6,param_3,&puStack_70,lVar6,&puStack_48);
      lVar2 = lVar6;
      if ((param_3 >> 1 & 1) == 0) {
        while (lVar2 = *(long *)(lVar2 + 0x58), lVar2 != 0) {
          FUN_03f71d4c(lVar2,param_3,&puStack_70,lVar6,&puStack_48);
        }
      }
      lVar2 = FUN_03f984c8(DAT_09535510,(long)puStack_40 - (long)puStack_48 >> 4);
      if (puStack_48 != puStack_40) {
        iVar7 = 0;
        puVar5 = puStack_48;
        do {
          uVar3 = FUN_03f9b524(puVar5[1],*puVar5);
          puVar1 = (undefined8 *)(lVar2 + 0x20 + (long)iVar7 * 8);
          *puVar1 = uVar3;
          FUN_03f5d7b8(puVar1);
          puVar5 = puVar5 + 2;
          iVar7 = iVar7 + 1;
        } while (puVar5 != puStack_40);
      }
    }
    else {
      FUN_03f926e8(&bStack_88,lVar2 + 0x14);
      if ((bStack_88 & 1) == 0) {
        puStack_70 = (undefined8 *)CONCAT71(uStack_87,bStack_88);
        puStack_68 = puStack_80;
        puStack_60 = puStack_78;
      }
      else {
        FUN_03f5d0a4(&puStack_70,puStack_78,puStack_80);
      }
      puStack_48 = (undefined8 *)0x0;
      puStack_40 = (undefined8 *)0x0;
      uStack_38 = 0;
      lVar6 = FUN_03fbe574(lVar6,1);
      FUN_03f71cb4(&puStack_48,*(undefined2 *)(lVar6 + 0x122));
      FUN_03f71fe0(lVar6,param_3,&puStack_70,lVar6,&puStack_48);
      lVar2 = lVar6;
      if ((param_3 >> 1 & 1) == 0) {
        while (lVar2 = *(long *)(lVar2 + 0x58), lVar2 != 0) {
          FUN_03f71fe0(lVar2,param_3,&puStack_70,lVar6,&puStack_48);
        }
      }
      lVar2 = FUN_03f984c8(DAT_09535510,(long)puStack_40 - (long)puStack_48 >> 4);
      if (puStack_48 != puStack_40) {
        iVar7 = 0;
        puVar5 = puStack_48;
        do {
          uVar3 = FUN_03f9b524(puVar5[1],*puVar5);
          puVar1 = (undefined8 *)(lVar2 + 0x20 + (long)iVar7 * 8);
          *puVar1 = uVar3;
          FUN_03f5d7b8(puVar1);
          puVar5 = puVar5 + 2;
          iVar7 = iVar7 + 1;
        } while (puVar5 != puStack_40);
      }
    }
    if (puStack_48 != (undefined8 *)0x0) {
      puStack_40 = puStack_48;
      operator_delete(puStack_48);
    }
    if (((ulong)puStack_70 & 1) != 0) {
      operator_delete(puStack_60);
    }
    if ((bStack_88 & 1) != 0) {
LAB_03f6e78c:
      operator_delete(puStack_78);
    }
  }
  for (lVar6 = 4; uVar4 = FUN_03f98240(lVar2), lVar6 - 4U < (uVar4 & 0xffffffff); lVar6 = lVar6 + 1)
  {
    uVar3 = *(undefined8 *)(*(long *)(lVar2 + lVar6 * 8) + 0x18);
    puVar5 = (undefined8 *)FUN_03f665b8(&uStack_a0);
    *puVar5 = uVar3;
  }
  uVar3 = FUN_03f8fd50(&uStack_a0);
LAB_03f6e7cc:
  FUN_03f6521c(&uStack_a0);
  return uVar3;
}

