// rea decompile_all
// name: FUN_03f89e70
// address: 0x3f89e70
// body: available
// range: 0x3f89e70-0x3f8a05b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x3f8a050 to 0x3fe0300 FUN_03fe0300 (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x3f8a058 to 0x3f5fa4c FUN_03f5fa4c (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_03f89e70(long param_1,undefined8 param_2,undefined8 param_3)

{
  ulong uVar1;
  void *pvVar2;
  int iVar3;
  undefined8 *puVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  undefined8 uVar8;
  void *pvVar9;
  ulong uVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  ulong uVar13;
  long *plVar14;
  long lVar15;
  undefined1 auVar16 [16];
  
  uVar8 = 0;
  do {
    iVar6 = (int)uVar8;
    uVar8 = FUN_0404bd00(uVar8,iVar6 + 1,param_1 + 0x20);
    iVar5 = (int)uVar8;
    if (iVar5 == iVar6) break;
  } while (iVar5 != 2);
  while (iVar5 != 0) {
    FUN_03fe02a8(param_1 + 0x20,2,0xffffffff);
    iVar5 = FUN_0404be70(2,param_1 + 0x20);
  }
  puVar11 = *(undefined8 **)(param_1 + 0x68);
  if (puVar11 < *(undefined8 **)(param_1 + 0x70)) {
    *puVar11 = param_2;
    puVar11[1] = param_3;
    puVar11 = puVar11 + 2;
    *(undefined8 **)(param_1 + 0x68) = puVar11;
  }
  else {
    plVar14 = (long *)(param_1 + 0x60);
    lVar15 = (long)puVar11 - *plVar14 >> 4;
    uVar1 = lVar15 + 1;
    if (uVar1 >> 0x3c != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5fa4c(plVar14);
    }
    uVar10 = (long)*(undefined8 **)(param_1 + 0x70) - *plVar14;
    uVar13 = (long)uVar10 >> 3;
    if (uVar13 <= uVar1) {
      uVar13 = uVar1;
    }
    if (0x7fffffffffffffef < uVar10) {
      uVar13 = 0xfffffffffffffff;
    }
    if (uVar13 == 0) {
      auVar16 = ZEXT816(0);
    }
    else {
      auVar16 = FUN_03f71f50();
    }
    puVar12 = (undefined8 *)(auVar16._0_8_ + lVar15 * 0x10);
    *puVar12 = param_2;
    puVar12[1] = param_3;
    puVar11 = puVar12 + 2;
    pvVar2 = *(void **)(param_1 + 0x60);
    pvVar9 = *(void **)(param_1 + 0x68);
    if (pvVar9 != pvVar2) {
      do {
        puVar4 = (undefined8 *)((long)pvVar9 + -8);
        uVar8 = *(undefined8 *)((long)pvVar9 + -0x10);
        pvVar9 = (void *)((long)pvVar9 + -0x10);
        puVar12[-1] = *puVar4;
        puVar12[-2] = uVar8;
        puVar12 = puVar12 + -2;
      } while (pvVar9 != pvVar2);
      pvVar9 = (void *)*plVar14;
    }
    *(undefined8 **)(param_1 + 0x60) = puVar12;
    *(undefined8 **)(param_1 + 0x68) = puVar11;
    *(long *)(param_1 + 0x70) = auVar16._0_8_ + auVar16._8_8_ * 0x10;
    if (pvVar9 != (void *)0x0) {
      operator_delete(pvVar9);
    }
  }
  *(undefined8 **)(param_1 + 0x68) = puVar11;
  iVar6 = FUN_0404bea0(0,param_1 + 0x20);
  if (iVar6 == 2) {
    FUN_03fe0300(param_1 + 0x20,1,0);
  }
  if (*(long *)(param_1 + 8) != 0) {
    iVar6 = *(int *)(param_1 + 0xbc);
    iVar5 = *(int *)(param_1 + 0xb8);
    if (*(int *)(param_1 + 0xb8) != iVar6) {
      do {
        iVar3 = iVar6 - iVar5;
        if (iVar5 + 1 <= iVar6) {
          iVar3 = 1;
        }
        iVar7 = FUN_0404bd40(iVar5,iVar3 + iVar5,param_1 + 0xb8);
        if (iVar7 == iVar5) {
          if (-1 < iVar5) {
            return;
          }
          if (-iVar5 <= iVar3) {
            iVar3 = -iVar5;
          }
          FUN_0404bf30(iVar3,param_1 + 0x78);
          FUN_03fe0300(param_1 + 0x78,iVar3,0);
          return;
        }
        iVar6 = *(int *)(param_1 + 0xbc);
        iVar5 = iVar7;
      } while (iVar7 != iVar6);
    }
  }
  return;
}

