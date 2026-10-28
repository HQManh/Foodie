// rea decompile_all
// name: thunk_FUN_03f6d670
// address: 0x75f87a4
// body: available
// range: 0x75f87a4-0x75f87a7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 thunk_FUN_03f6d670(long param_1,long param_2,uint param_3,int param_4)

{
  long lVar1;
  void *pvVar2;
  void *pvVar3;
  long lVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long lVar8;
  long lVar9;
  ulong uVar10;
  ulong uVar11;
  undefined8 uStack_100c8;
  undefined8 uStack_100c0;
  undefined8 uStack_100b8;
  byte bStack_100b0;
  undefined7 uStack_100af;
  void *pvStack_100a8;
  void *pvStack_100a0;
  byte bStack_10098;
  undefined7 uStack_10097;
  void *pvStack_10090;
  void *pvStack_10088;
  void *pvStack_10080;
  void *pvStack_10078;
  void *pvStack_10070;
  void *pvStack_10060;
  void *pvStack_10058;
  undefined8 uStack_10050;
  undefined1 auStack_10047 [65543];
  
  lVar1 = tpidr_el0;
  lVar8 = *(long *)(lVar1 + 0x28);
  lVar9 = *(long *)(param_1 + 0x10);
  uStack_100c0 = 0;
  uStack_100b8 = 0;
  uStack_100c8 = 0;
  if ((*(byte *)(lVar9 + 0xb) >> 5 & 1) != 0) {
    uVar6 = FUN_03f8fda8();
    goto LAB_03f6d874;
  }
  if (param_2 == 0) {
    if ((param_3 & 0xc) == 0) goto LAB_03f6d7a4;
LAB_03f6d724:
    pvStack_10080 = (void *)0x0;
    pvStack_10078 = (void *)0x0;
    pvStack_10070 = (void *)0x0;
    memset(auStack_10047,0,0xffff);
    uVar6 = FUN_03fbe574(lVar9,1);
    FUN_03f71ae4(uVar6,uVar6,param_3,&pvStack_10060,&pvStack_10080,auStack_10047);
    if ((param_3 >> 1 & 1) == 0) {
      for (lVar9 = FUN_03fbf154(uVar6); lVar9 != 0; lVar9 = FUN_03fbf154(lVar9)) {
        FUN_03f71ae4(lVar9,uVar6,param_3,&pvStack_10060,&pvStack_10080,auStack_10047);
      }
    }
    pvVar3 = pvStack_10078;
    pvVar2 = pvStack_10080;
    uVar10 = (long)pvStack_10078 - (long)pvStack_10080 >> 3;
    lVar9 = FUN_03f984c8(DAT_09535508,uVar10);
    if (pvVar3 != pvVar2) {
      uVar11 = 0;
      puVar5 = (undefined8 *)(lVar9 + 0x20);
      if (uVar10 < 2) {
        uVar10 = 1;
      }
      do {
        uVar7 = FUN_03f9adc4(*(undefined8 *)((long)pvStack_10080 + uVar11 * 8),uVar6);
        *puVar5 = uVar7;
        FUN_03f5d7b8(puVar5);
        uVar11 = uVar11 + 1;
        puVar5 = puVar5 + 1;
      } while (uVar10 != uVar11);
    }
    if (pvStack_10080 != (void *)0x0) {
      pvStack_10078 = pvStack_10080;
      pvStack_10088 = pvStack_10080;
LAB_03f6d834:
      operator_delete(pvStack_10088);
    }
  }
  else {
    lVar4 = FUN_03f967b4(param_2);
    if (((param_3 & 0xc) == 0) ||
       (lVar9 = *(long *)(param_1 + 0x10), (*(uint *)(lVar9 + 8) >> 0x1d & 1) != 0)) {
LAB_03f6d7a4:
      lVar9 = FUN_03f984c8(DAT_09535510,0);
    }
    else {
      if (lVar4 == 0) goto LAB_03f6d724;
      if (((param_3 & 1) == 0) && (param_4 != 2)) {
        FUN_03f926e8(&bStack_100b0,lVar4 + 0x14);
        if ((bStack_100b0 & 1) == 0) {
          pvStack_10080 = (void *)CONCAT71(uStack_100af,bStack_100b0);
          pvStack_10078 = pvStack_100a8;
          pvStack_10070 = pvStack_100a0;
        }
        else {
          FUN_03f5d0a4(&pvStack_10080,pvStack_100a0,pvStack_100a8);
        }
        pvStack_10060 = (void *)0x0;
        pvStack_10058 = (void *)0x0;
        uStack_10050 = 0;
        memset(auStack_10047,0,0xffff);
        uVar6 = FUN_03fbe574(lVar9,1);
        FUN_03f718e4(uVar6,uVar6,param_3,&pvStack_10080,&pvStack_10060,auStack_10047);
        if ((param_3 >> 1 & 1) == 0) {
          for (lVar9 = FUN_03fbf154(uVar6); lVar9 != 0; lVar9 = FUN_03fbf154(lVar9)) {
            FUN_03f718e4(lVar9,uVar6,param_3,&pvStack_10080,&pvStack_10060,auStack_10047);
          }
        }
        pvVar3 = pvStack_10058;
        pvVar2 = pvStack_10060;
        uVar10 = (long)pvStack_10058 - (long)pvStack_10060 >> 3;
        lVar9 = FUN_03f984c8(DAT_09535508,uVar10);
        if (pvVar3 != pvVar2) {
          uVar11 = 0;
          puVar5 = (undefined8 *)(lVar9 + 0x20);
          if (uVar10 < 2) {
            uVar10 = 1;
          }
          do {
            uVar7 = FUN_03f9adc4(*(undefined8 *)((long)pvStack_10060 + uVar11 * 8),uVar6);
            *puVar5 = uVar7;
            FUN_03f5d7b8(puVar5);
            uVar11 = uVar11 + 1;
            puVar5 = puVar5 + 1;
          } while (uVar10 != uVar11);
        }
        if (pvStack_10060 != (void *)0x0) {
          pvStack_10058 = pvStack_10060;
          operator_delete(pvStack_10060);
        }
        pvStack_10088 = pvStack_100a0;
        bStack_10098 = bStack_100b0;
        if (((ulong)pvStack_10080 & 1) != 0) {
          operator_delete(pvStack_10070);
          pvStack_10088 = pvStack_100a0;
          bStack_10098 = bStack_100b0;
        }
      }
      else {
        FUN_03f926e8(&bStack_10098,lVar4 + 0x14);
        if ((bStack_10098 & 1) == 0) {
          pvStack_10080 = (void *)CONCAT71(uStack_10097,bStack_10098);
          pvStack_10078 = pvStack_10090;
          pvStack_10070 = pvStack_10088;
        }
        else {
          FUN_03f5d0a4(&pvStack_10080,pvStack_10088,pvStack_10090);
        }
        pvStack_10060 = (void *)0x0;
        pvStack_10058 = (void *)0x0;
        uStack_10050 = 0;
        memset(auStack_10047,0,0xffff);
        uVar6 = FUN_03fbe574(lVar9,1);
        FUN_03f716e4(uVar6,uVar6,param_3,&pvStack_10080,&pvStack_10060,auStack_10047);
        if ((param_3 >> 1 & 1) == 0) {
          for (lVar9 = FUN_03fbf154(uVar6); lVar9 != 0; lVar9 = FUN_03fbf154(lVar9)) {
            FUN_03f716e4(lVar9,uVar6,param_3,&pvStack_10080,&pvStack_10060,auStack_10047);
          }
        }
        pvVar3 = pvStack_10058;
        pvVar2 = pvStack_10060;
        uVar10 = (long)pvStack_10058 - (long)pvStack_10060 >> 3;
        lVar9 = FUN_03f984c8(DAT_09535508,uVar10);
        if (pvVar3 != pvVar2) {
          uVar11 = 0;
          puVar5 = (undefined8 *)(lVar9 + 0x20);
          if (uVar10 < 2) {
            uVar10 = 1;
          }
          do {
            uVar7 = FUN_03f9adc4(*(undefined8 *)((long)pvStack_10060 + uVar11 * 8),uVar6);
            *puVar5 = uVar7;
            FUN_03f5d7b8(puVar5);
            uVar11 = uVar11 + 1;
            puVar5 = puVar5 + 1;
          } while (uVar10 != uVar11);
        }
        if (pvStack_10060 != (void *)0x0) {
          pvStack_10058 = pvStack_10060;
          operator_delete(pvStack_10060);
        }
        if (((ulong)pvStack_10080 & 1) != 0) {
          operator_delete(pvStack_10070);
        }
      }
      if ((bStack_10098 & 1) != 0) goto LAB_03f6d834;
    }
  }
  for (lVar4 = 4; uVar10 = FUN_03f98240(lVar9), lVar4 - 4U < (uVar10 & 0xffffffff);
      lVar4 = lVar4 + 1) {
    uVar6 = *(undefined8 *)(*(long *)(lVar9 + lVar4 * 8) + 0x10);
    puVar5 = (undefined8 *)FUN_03f665b8(&uStack_100c8);
    *puVar5 = uVar6;
  }
  uVar6 = FUN_03f8fd50(&uStack_100c8);
LAB_03f6d874:
  FUN_03f6521c(&uStack_100c8);
  if (*(long *)(lVar1 + 0x28) != lVar8) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar6;
}

