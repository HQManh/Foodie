// rea decompile_all
// name: FUN_03fdc084
// address: 0x3fdc084
// body: available
// range: 0x3fdc084-0x3fdc53f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int FUN_03fdc084(long *param_1,uint param_2)

{
  int iVar1;
  uint uVar2;
  bool bVar3;
  int iVar4;
  long *plVar5;
  long lVar6;
  ulong uVar7;
  long lVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  ulong uVar12;
  
  iVar4 = *(int *)(*param_1 + 8);
  uVar7 = param_1[3] - 5U;
  if ((ulong)*(uint *)(param_1 + 10) <= param_1[3] - 5U) {
    uVar7 = (ulong)*(uint *)(param_1 + 10);
  }
  do {
    plVar5 = (long *)*param_1;
    uVar11 = *(int *)((long)param_1 + 0x1734) + 0x2a >> 3;
    if (*(uint *)(plVar5 + 4) < uVar11) {
      bVar3 = true;
      goto LAB_03fdc25c;
    }
    iVar1 = *(int *)((long)param_1 + 0xac);
    lVar6 = param_1[0x13];
    uVar2 = iVar1 - (int)lVar6;
    uVar11 = *(uint *)(plVar5 + 4) - uVar11;
    uVar9 = uVar2 + *(uint *)(plVar5 + 1);
    uVar10 = uVar9;
    if (0xfffe < (ulong)uVar2 + (ulong)*(uint *)(plVar5 + 1)) {
      uVar10 = 0xffff;
    }
    if (uVar11 <= uVar10) {
      uVar10 = uVar11;
    }
    if (uVar10 < (uint)uVar7) {
      bVar3 = true;
      if (((uVar10 != uVar9) || (param_2 == 0)) || (param_2 != 4 && uVar10 == 0)) goto LAB_03fdc25c;
    }
    bVar3 = uVar10 == uVar9;
    FUN_03fdd9f4(param_1,0,0,param_2 == 4 && bVar3);
    *(char *)(param_1[2] + param_1[5] + -4) = (char)uVar10;
    *(char *)(param_1[2] + param_1[5] + -3) = (char)(uVar10 >> 8);
    *(char *)(param_1[2] + param_1[5] + -2) = (char)~uVar10;
    *(char *)(param_1[2] + param_1[5] + -1) = (char)(~uVar10 >> 8);
    FUN_03fdbffc(*param_1);
    if (iVar1 != (int)lVar6) {
      if (uVar10 <= uVar2) {
        uVar2 = uVar10;
      }
      uVar12 = (ulong)uVar2;
      memcpy(*(void **)(*param_1 + 0x18),(void *)(param_1[0xc] + param_1[0x13]),uVar12);
      lVar6 = *param_1;
      lVar8 = param_1[0x13];
      uVar10 = uVar10 - uVar2;
      *(ulong *)(lVar6 + 0x18) = *(long *)(lVar6 + 0x18) + uVar12;
      *(uint *)(lVar6 + 0x20) = *(int *)(lVar6 + 0x20) - uVar2;
      *(ulong *)(lVar6 + 0x28) = *(long *)(lVar6 + 0x28) + uVar12;
      param_1[0x13] = lVar8 + uVar12;
    }
    if (uVar10 != 0) {
      FUN_03fdcaa0(*param_1,*(undefined8 *)(*param_1 + 0x18),uVar10);
      lVar6 = *param_1;
      *(uint *)(lVar6 + 0x20) = *(int *)(lVar6 + 0x20) - uVar10;
      *(ulong *)(lVar6 + 0x18) = *(long *)(lVar6 + 0x18) + (ulong)uVar10;
      *(ulong *)(lVar6 + 0x28) = *(long *)(lVar6 + 0x28) + (ulong)uVar10;
    }
  } while (param_2 != 4 || !bVar3);
  plVar5 = (long *)*param_1;
  bVar3 = false;
LAB_03fdc25c:
  uVar11 = iVar4 - (int)plVar5[1];
  if (uVar11 == 0) {
    uVar7 = (ulong)*(uint *)((long)param_1 + 0xac);
  }
  else {
    uVar9 = *(uint *)(param_1 + 10);
    uVar7 = (ulong)uVar9;
    if (uVar11 < uVar9) {
      uVar12 = (ulong)*(uint *)((long)param_1 + 0xac);
      if (param_1[0xd] - uVar12 <= (ulong)uVar11) {
        uVar9 = *(uint *)((long)param_1 + 0xac) - uVar9;
        *(uint *)((long)param_1 + 0xac) = uVar9;
        memcpy((void *)param_1[0xc],(void *)(param_1[0xc] + uVar7),(ulong)uVar9);
        if (*(uint *)(param_1 + 0x2e5) < 2) {
          *(uint *)(param_1 + 0x2e5) = *(uint *)(param_1 + 0x2e5) + 1;
        }
        uVar9 = *(uint *)((long)param_1 + 0xac);
        uVar12 = (ulong)uVar9;
        if (uVar9 < *(uint *)((long)param_1 + 0x172c)) {
          *(uint *)((long)param_1 + 0x172c) = uVar9;
        }
      }
      memcpy((void *)(param_1[0xc] + uVar12),(void *)(*(long *)*param_1 - (ulong)uVar11),
             (ulong)uVar11);
      uVar10 = (int)param_1[10] - *(int *)((long)param_1 + 0x172c);
      uVar9 = *(int *)((long)param_1 + 0xac) + uVar11;
      *(uint *)((long)param_1 + 0xac) = uVar9;
      if (uVar10 <= uVar11) {
        uVar11 = uVar10;
      }
      *(uint *)((long)param_1 + 0x172c) = uVar11 + *(int *)((long)param_1 + 0x172c);
    }
    else {
      lVar6 = *plVar5;
      *(undefined4 *)(param_1 + 0x2e5) = 2;
      memcpy((void *)param_1[0xc],(void *)(lVar6 - uVar7),uVar7);
      uVar9 = *(uint *)(param_1 + 10);
      *(uint *)((long)param_1 + 0xac) = uVar9;
      *(uint *)((long)param_1 + 0x172c) = uVar9;
    }
    uVar7 = (ulong)uVar9;
    param_1[0x13] = uVar7;
  }
  if ((ulong)param_1[0x2e7] < uVar7) {
    param_1[0x2e7] = uVar7;
  }
  if (bVar3) {
    if ((((param_2 | 4) == 4) || (*(int *)(*param_1 + 8) != 0)) || (param_1[0x13] != uVar7)) {
      uVar11 = (int)param_1[0xd] - (int)uVar7;
      if (uVar11 < *(uint *)(*param_1 + 8)) {
        uVar12 = (ulong)*(uint *)(param_1 + 10);
        if ((long)uVar12 <= param_1[0x13]) {
          uVar9 = (int)uVar7 - *(uint *)(param_1 + 10);
          param_1[0x13] = param_1[0x13] - uVar12;
          *(uint *)((long)param_1 + 0xac) = uVar9;
          memcpy((void *)param_1[0xc],(void *)(param_1[0xc] + uVar12),(ulong)uVar9);
          if (*(uint *)(param_1 + 0x2e5) < 2) {
            *(uint *)(param_1 + 0x2e5) = *(uint *)(param_1 + 0x2e5) + 1;
          }
          uVar9 = *(uint *)((long)param_1 + 0xac);
          uVar7 = (ulong)uVar9;
          uVar11 = (int)param_1[10] + uVar11;
          if (uVar9 < *(uint *)((long)param_1 + 0x172c)) {
            *(uint *)((long)param_1 + 0x172c) = uVar9;
          }
        }
      }
      uVar9 = *(uint *)(*param_1 + 8);
      if (uVar9 <= uVar11) {
        uVar11 = uVar9;
      }
      if (uVar11 != 0) {
        FUN_03fdcaa0(*param_1,param_1[0xc] + uVar7,uVar11);
        uVar10 = (int)param_1[10] - *(int *)((long)param_1 + 0x172c);
        uVar9 = *(int *)((long)param_1 + 0xac) + uVar11;
        uVar7 = (ulong)uVar9;
        *(uint *)((long)param_1 + 0xac) = uVar9;
        if (uVar10 <= uVar11) {
          uVar11 = uVar10;
        }
        *(uint *)((long)param_1 + 0x172c) = uVar11 + *(int *)((long)param_1 + 0x172c);
      }
      if ((ulong)param_1[0x2e7] < uVar7) {
        param_1[0x2e7] = uVar7;
      }
      uVar12 = param_1[3] - (ulong)(uint)(*(int *)((long)param_1 + 0x1734) + 0x2a >> 3);
      if (0xfffe < uVar12) {
        uVar12 = 0xffff;
      }
      uVar9 = (uint)uVar12;
      uVar11 = *(uint *)(param_1 + 10);
      if (uVar9 <= *(uint *)(param_1 + 10)) {
        uVar11 = uVar9;
      }
      iVar4 = (int)param_1[0x13];
      uVar10 = (int)uVar7 - iVar4;
      if (uVar10 < uVar11) {
        if (param_2 == 0) {
          return 0;
        }
        if (param_2 != 4 && (int)uVar7 == iVar4) {
          return 0;
        }
        if (*(int *)(*param_1 + 8) != 0) {
          return 0;
        }
      }
      uVar11 = uVar10;
      if (uVar9 <= uVar10) {
        uVar11 = uVar9;
      }
      if ((param_2 == 4) && (*(int *)(*param_1 + 8) == 0)) {
        uVar9 = (uint)(uVar10 <= uVar9);
      }
      else {
        uVar9 = 0;
      }
      FUN_03fdd9f4(param_1,param_1[0xc] + param_1[0x13],(ulong)uVar11,uVar9);
      param_1[0x13] = param_1[0x13] + (ulong)uVar11;
      FUN_03fdbffc(*param_1);
      iVar4 = uVar9 << 1;
    }
    else {
      iVar4 = 1;
    }
  }
  else {
    iVar4 = 3;
  }
  return iVar4;
}

