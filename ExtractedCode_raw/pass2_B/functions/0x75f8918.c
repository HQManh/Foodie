// rea decompile_all
// name: thunk_FUN_03f6c914
// address: 0x75f8918
// body: available
// range: 0x75f8918-0x75f891b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 thunk_FUN_03f6c914(long param_1,long param_2,int param_3)

{
  long *plVar1;
  long *plVar2;
  long lVar3;
  undefined8 uVar4;
  ulong uVar5;
  undefined8 *puVar6;
  long *plVar7;
  long lVar8;
  int iVar9;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  byte abStack_190 [8];
  undefined8 uStack_188;
  void *pvStack_180;
  byte abStack_178 [8];
  undefined8 uStack_170;
  void *pvStack_168;
  ulong uStack_160;
  undefined8 uStack_158;
  void *pvStack_150;
  long *plStack_140;
  long lStack_138;
  long *plStack_130;
  long *plStack_128;
  long lStack_120;
  long lStack_118;
  long *plStack_110;
  long *plStack_108;
  undefined8 uStack_100;
  long *plStack_f0;
  long lStack_e8;
  long *plStack_e0;
  long *plStack_d8;
  long lStack_d0;
  long lStack_c8;
  long *plStack_c0;
  long *plStack_b8;
  undefined8 uStack_b0;
  long alStack_a8 [7];
  long lStack_70;
  long lStack_68;
  long *plStack_60;
  long lStack_48;
  
  uStack_1a0 = 0;
  uStack_198 = 0;
  uStack_1a8 = 0;
  if ((*(byte *)(*(long *)(param_1 + 0x10) + 0xb) >> 5 & 1) == 0) {
    FUN_03f66604(&uStack_1a8,4);
    if ((param_2 == 0) || (lVar3 = FUN_03f967b4(param_2), lVar3 == 0)) {
      if ((*(byte *)(*(long *)(param_1 + 0x10) + 0xb) >> 5 & 1) == 0) {
        FUN_03f6fba4(alStack_a8,0,&plStack_f0,&plStack_140);
        uVar4 = FUN_03fbe574(*(undefined8 *)(param_1 + 0x10),1);
        FUN_03f6fc10(uVar4,uVar4,alStack_a8);
        for (lVar3 = FUN_03fbf154(uVar4); lVar3 != 0; lVar3 = FUN_03fbf154(lVar3)) {
          FUN_03f6fc10(lVar3,uVar4,alStack_a8);
        }
        lVar3 = FUN_03f984c8(DAT_09535518,lStack_48 - lStack_70);
        FUN_03f70ee0(&plStack_140,alStack_a8);
        iVar9 = 0;
        lStack_e8 = lStack_138;
        plStack_f0 = plStack_140;
        plStack_d8 = plStack_128;
        plStack_e0 = plStack_130;
        uStack_b0 = uStack_100;
        lStack_c8 = lStack_118;
        lStack_d0 = lStack_120;
        plStack_b8 = plStack_108;
        plStack_c0 = plStack_110;
        while( true ) {
          uStack_100 = 0;
          lStack_138 = lStack_68;
          plStack_130 = plStack_60;
          plStack_128 = plStack_60;
          lStack_120 = 0;
          lStack_118 = lStack_68;
          plStack_110 = plStack_60;
          plStack_108 = plStack_60;
          plStack_140 = alStack_a8;
          FUN_03f709e4(&plStack_140);
          if ((((lStack_e8 == lStack_138) && (plStack_e0 == plStack_130)) &&
              (plStack_d8 == plStack_128)) &&
             ((plStack_128 == plStack_130 || (lStack_d0 == lStack_120)))) break;
          uVar4 = FUN_03f9b874(*(undefined8 *)(lStack_d0 + 0x10),*(undefined8 *)(lStack_d0 + 8));
          puVar6 = (undefined8 *)(lVar3 + 0x20 + (long)iVar9 * 8);
          *puVar6 = uVar4;
          FUN_03f5d7b8(puVar6);
          lStack_d0 = lStack_d0 + 0x18;
          plVar2 = plStack_d8;
          if (lStack_d0 == *plStack_d8 + (ulong)*(ushort *)(plStack_d8 + 1) * 0x18) {
            do {
              plVar7 = plStack_d8 + 2;
              plVar2 = plStack_e0;
              if (plVar7 == plStack_e0) break;
              lStack_d0 = *plVar7;
              plVar1 = plStack_d8 + 3;
              plStack_d8 = plVar7;
              plVar2 = plVar7;
            } while ((short)*plVar1 == 0);
          }
          plStack_d8 = plVar2;
          FUN_03f709e4(&plStack_f0);
          iVar9 = iVar9 + 1;
        }
        plStack_f0 = &lStack_68;
        FUN_03f5efa4(&plStack_f0);
      }
      else {
        lVar3 = FUN_03f984c8(DAT_09535518,0);
      }
    }
    else {
      if (param_3 == 2) {
        FUN_03f926e8(abStack_178,lVar3 + 0x14);
        if ((abStack_178[0] & 1) == 0) {
          uStack_160 = (ulong)abStack_178[0];
          uStack_158 = uStack_170;
          pvStack_150 = pvStack_168;
        }
        else {
          FUN_03f5d0a4(&uStack_160,pvStack_168,uStack_170);
        }
        if ((*(byte *)(*(long *)(param_1 + 0x10) + 0xb) >> 5 & 1) == 0) {
          FUN_03f6fba4(alStack_a8,0,&plStack_f0,&plStack_140);
          uVar4 = FUN_03fbe574(*(undefined8 *)(param_1 + 0x10),1);
          FUN_03f70f5c(uVar4,uVar4,alStack_a8,&uStack_160);
          for (lVar3 = FUN_03fbf154(uVar4); lVar3 != 0; lVar3 = FUN_03fbf154(lVar3)) {
            FUN_03f70f5c(lVar3,uVar4,alStack_a8,&uStack_160);
          }
          lVar3 = FUN_03f984c8(DAT_09535518,lStack_48 - lStack_70);
          FUN_03f70ee0(&plStack_140,alStack_a8);
          iVar9 = 0;
          lStack_e8 = lStack_138;
          plStack_f0 = plStack_140;
          plStack_d8 = plStack_128;
          plStack_e0 = plStack_130;
          uStack_b0 = uStack_100;
          lStack_c8 = lStack_118;
          lStack_d0 = lStack_120;
          plStack_b8 = plStack_108;
          plStack_c0 = plStack_110;
          while( true ) {
            uStack_100 = 0;
            lStack_138 = lStack_68;
            plStack_130 = plStack_60;
            plStack_128 = plStack_60;
            lStack_120 = 0;
            lStack_118 = lStack_68;
            plStack_110 = plStack_60;
            plStack_108 = plStack_60;
            plStack_140 = alStack_a8;
            FUN_03f709e4(&plStack_140);
            if ((((lStack_e8 == lStack_138) && (plStack_e0 == plStack_130)) &&
                (plStack_d8 == plStack_128)) &&
               ((plStack_128 == plStack_130 || (lStack_d0 == lStack_120)))) break;
            uVar4 = FUN_03f9b874(*(undefined8 *)(lStack_d0 + 0x10),*(undefined8 *)(lStack_d0 + 8));
            puVar6 = (undefined8 *)(lVar3 + 0x20 + (long)iVar9 * 8);
            *puVar6 = uVar4;
            FUN_03f5d7b8(puVar6);
            lStack_d0 = lStack_d0 + 0x18;
            plVar2 = plStack_d8;
            if (lStack_d0 == *plStack_d8 + (ulong)*(ushort *)(plStack_d8 + 1) * 0x18) {
              do {
                plVar7 = plStack_d8 + 2;
                plVar2 = plStack_e0;
                if (plVar7 == plStack_e0) break;
                lStack_d0 = *plVar7;
                plVar1 = plStack_d8 + 3;
                plStack_d8 = plVar7;
                plVar2 = plVar7;
              } while ((short)*plVar1 == 0);
            }
            plStack_d8 = plVar2;
            FUN_03f709e4(&plStack_f0);
            iVar9 = iVar9 + 1;
          }
          plStack_f0 = &lStack_68;
          FUN_03f5efa4(&plStack_f0);
        }
        else {
          lVar3 = FUN_03f984c8(DAT_09535518,0);
        }
        pvStack_180 = pvStack_168;
        abStack_190[0] = abStack_178[0];
        if (((byte)uStack_160 & 1) != 0) {
          operator_delete(pvStack_150);
          pvStack_180 = pvStack_168;
          abStack_190[0] = abStack_178[0];
        }
      }
      else {
        FUN_03f926e8(abStack_190,lVar3 + 0x14);
        if ((abStack_190[0] & 1) == 0) {
          uStack_160 = (ulong)abStack_190[0];
          uStack_158 = uStack_188;
          pvStack_150 = pvStack_180;
        }
        else {
          FUN_03f5d0a4(&uStack_160,pvStack_180,uStack_188);
        }
        if ((*(byte *)(*(long *)(param_1 + 0x10) + 0xb) >> 5 & 1) == 0) {
          FUN_03f6fba4(alStack_a8,0,&plStack_f0,&plStack_140);
          uVar4 = FUN_03fbe574(*(undefined8 *)(param_1 + 0x10),1);
          FUN_03f710c0(uVar4,uVar4,alStack_a8,&uStack_160);
          for (lVar3 = FUN_03fbf154(uVar4); lVar3 != 0; lVar3 = FUN_03fbf154(lVar3)) {
            FUN_03f710c0(lVar3,uVar4,alStack_a8,&uStack_160);
          }
          lVar3 = FUN_03f984c8(DAT_09535518,lStack_48 - lStack_70);
          FUN_03f70ee0(&plStack_140,alStack_a8);
          iVar9 = 0;
          lStack_e8 = lStack_138;
          plStack_f0 = plStack_140;
          plStack_d8 = plStack_128;
          plStack_e0 = plStack_130;
          uStack_b0 = uStack_100;
          lStack_c8 = lStack_118;
          lStack_d0 = lStack_120;
          plStack_b8 = plStack_108;
          plStack_c0 = plStack_110;
          while( true ) {
            uStack_100 = 0;
            lStack_138 = lStack_68;
            plStack_130 = plStack_60;
            plStack_128 = plStack_60;
            lStack_120 = 0;
            lStack_118 = lStack_68;
            plStack_110 = plStack_60;
            plStack_108 = plStack_60;
            plStack_140 = alStack_a8;
            FUN_03f709e4(&plStack_140);
            if (((lStack_e8 == lStack_138) && (plStack_e0 == plStack_130)) &&
               ((plStack_d8 == plStack_128 &&
                ((plStack_128 == plStack_130 || (lStack_d0 == lStack_120)))))) break;
            uVar4 = FUN_03f9b874(*(undefined8 *)(lStack_d0 + 0x10),*(undefined8 *)(lStack_d0 + 8));
            puVar6 = (undefined8 *)(lVar3 + 0x20 + (long)iVar9 * 8);
            *puVar6 = uVar4;
            FUN_03f5d7b8(puVar6);
            lStack_d0 = lStack_d0 + 0x18;
            plVar2 = plStack_d8;
            if (lStack_d0 == *plStack_d8 + (ulong)*(ushort *)(plStack_d8 + 1) * 0x18) {
              do {
                plVar7 = plStack_d8 + 2;
                plVar2 = plStack_e0;
                if (plVar7 == plStack_e0) break;
                lStack_d0 = *plVar7;
                plVar1 = plStack_d8 + 3;
                plStack_d8 = plVar7;
                plVar2 = plVar7;
              } while ((short)*plVar1 == 0);
            }
            plStack_d8 = plVar2;
            FUN_03f709e4(&plStack_f0);
            iVar9 = iVar9 + 1;
          }
          plStack_f0 = &lStack_68;
          FUN_03f5efa4(&plStack_f0);
        }
        else {
          lVar3 = FUN_03f984c8(DAT_09535518,0);
        }
        if (((byte)uStack_160 & 1) != 0) {
          operator_delete(pvStack_150);
        }
      }
      if ((abStack_190[0] & 1) != 0) {
        operator_delete(pvStack_180);
      }
    }
    for (lVar8 = 4; uVar5 = FUN_03f98240(lVar3), lVar8 - 4U < (uVar5 & 0xffffffff);
        lVar8 = lVar8 + 1) {
      uVar4 = *(undefined8 *)(*(long *)(lVar3 + lVar8 * 8) + 0x20);
      puVar6 = (undefined8 *)FUN_03f665b8(&uStack_1a8);
      *puVar6 = uVar4;
    }
    uVar4 = FUN_03f8fd50(&uStack_1a8);
  }
  else {
    uVar4 = FUN_03f8fda8();
  }
  FUN_03f6521c(&uStack_1a8);
  return uVar4;
}

