// rea decompile_all
// name: FUN_03f821c0
// address: 0x3f821c0
// body: available
// range: 0x3f821c0-0x3f823fb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x3f823d4 to 0x3f8047c FUN_03f8047c (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x3f823f8 to 0x3f5fa4c FUN_03f5fa4c (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 FUN_03f821c0(void)

{
  undefined8 *puVar1;
  long lVar2;
  int iVar3;
  int iVar4;
  long lVar5;
  ulong uVar6;
  pthread_t pVar7;
  undefined8 uVar8;
  undefined8 *puVar9;
  uint uVar10;
  ulong uVar11;
  ulong uVar12;
  ulong uVar13;
  long *plVar14;
  long *plVar15;
  undefined8 *puVar16;
  undefined8 *puVar17;
  long lVar18;
  undefined1 auVar19 [16];
  
  lVar5 = FUN_03faa758();
  uVar6 = FUN_03fbc984();
  lVar2 = DAT_09534880;
  if ((uVar6 & 1) == 0) {
    pVar7 = pthread_self();
    if (pVar7 == *(pthread_t *)(lVar2 + 0x60)) {
      *(int *)(lVar2 + 0x68) = *(int *)(lVar2 + 0x68) + 1;
    }
    else {
      uVar8 = 0;
      do {
        iVar4 = (int)uVar8;
        uVar8 = FUN_0404bd00(uVar8,iVar4 + 1,lVar2 + 0x20);
        iVar3 = (int)uVar8;
        if (iVar3 == iVar4) break;
      } while (iVar3 != 2);
      while (iVar3 != 0) {
        FUN_03fe02a8(lVar2 + 0x20,2,0xffffffff);
        iVar3 = FUN_0404be70(2,lVar2 + 0x20);
      }
      *(pthread_t *)(lVar2 + 0x60) = pVar7;
    }
    lVar2 = DAT_09534880;
    puVar16 = *(undefined8 **)(DAT_09534880 + 0x10);
    plVar15 = (long *)(DAT_09534880 + 8);
    lVar18 = *plVar15;
    uVar6 = (long)puVar16 - lVar18 >> 3;
    if ((long)puVar16 - lVar18 != 0) {
      uVar12 = 0;
      uVar10 = 1;
      do {
        plVar14 = *(long **)(lVar18 + uVar12 * 8);
        if (*plVar14 == lVar5) goto LAB_03f82348;
        uVar13 = (ulong)uVar10;
        uVar12 = (ulong)uVar10;
        uVar10 = uVar10 + 1;
      } while (uVar13 < uVar6);
    }
    plVar14 = operator_new(0x10);
    *plVar14 = lVar5;
    plVar14[1] = 0;
    if (puVar16 < *(undefined8 **)(lVar2 + 0x18)) {
      puVar17 = puVar16 + 1;
      *puVar16 = plVar14;
      *(undefined8 **)(lVar2 + 0x10) = puVar17;
    }
    else {
      uVar12 = uVar6 + 1;
      if (uVar12 >> 0x3d != 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5fa4c(plVar15);
      }
      uVar11 = (long)*(undefined8 **)(lVar2 + 0x18) - lVar18;
      uVar13 = (long)uVar11 >> 2;
      if (uVar13 <= uVar12) {
        uVar13 = uVar12;
      }
      if (0x7ffffffffffffff7 < uVar11) {
        uVar13 = 0x1fffffffffffffff;
      }
      if (uVar13 == 0) {
        auVar19 = ZEXT816(0);
      }
      else {
        auVar19 = FUN_03f695c0();
      }
      puVar16 = (undefined8 *)(auVar19._0_8_ + uVar6 * 8);
      puVar17 = puVar16 + 1;
      *puVar16 = plVar14;
      puVar1 = *(undefined8 **)(lVar2 + 8);
      puVar9 = *(undefined8 **)(lVar2 + 0x10);
      if (puVar9 != puVar1) {
        do {
          puVar9 = puVar9 + -1;
          puVar16 = puVar16 + -1;
          *puVar16 = *puVar9;
        } while (puVar9 != puVar1);
        puVar9 = (undefined8 *)*plVar15;
      }
      *(undefined8 **)(lVar2 + 8) = puVar16;
      *(undefined8 **)(lVar2 + 0x10) = puVar17;
      *(long *)(lVar2 + 0x18) = auVar19._0_8_ + auVar19._8_8_ * 8;
      if (puVar9 != (undefined8 *)0x0) {
        operator_delete(puVar9);
      }
    }
    *(undefined8 **)(lVar2 + 0x10) = puVar17;
LAB_03f82348:
    lVar2 = DAT_09534880;
    iVar4 = *(int *)(DAT_09534880 + 0x68);
    *(int *)(plVar14 + 1) = (int)plVar14[1] + 1;
    if (iVar4 == 0) {
      *(undefined8 *)(lVar2 + 0x60) = 0;
      iVar4 = FUN_0404bea0(0,lVar2 + 0x20);
      if (iVar4 == 2) {
        FUN_03fe0300(lVar2 + 0x20,1,0);
      }
    }
    else {
      *(int *)(lVar2 + 0x68) = iVar4 + -1;
    }
    if (*(char *)(DAT_09534880 + 0x284) == '\0') {
      FUN_03f7ffbc();
      uVar6 = FUN_03f81378();
      if ((uVar6 & 1) != 0) {
        return 1;
      }
      uVar8 = FUN_03f8047c();
      return uVar8;
    }
  }
  return 0;
}

