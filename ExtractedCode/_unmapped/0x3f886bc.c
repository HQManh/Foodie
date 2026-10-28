// rea decompile_all
// name: FUN_03f886bc
// address: 0x3f886bc
// body: available
// range: 0x3f886bc-0x3f88a27 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_03f886bc(long *param_1,long *param_2)

{
  long lVar1;
  long lVar2;
  bool bVar3;
  long *plVar4;
  long *plVar5;
  long *plVar6;
  undefined8 *puVar7;
  long lVar8;
  long *plVar9;
  long *plVar10;
  
  plVar5 = (long *)*param_2;
  plVar6 = param_2;
  if (plVar5 == (long *)0x0) {
LAB_03f886dc:
    plVar5 = (long *)plVar6[1];
    if (plVar5 == (long *)0x0) {
      puVar7 = (undefined8 *)plVar6[2];
      bVar3 = true;
      goto LAB_03f88700;
    }
  }
  else {
    plVar4 = (long *)param_2[1];
    if ((long *)param_2[1] != (long *)0x0) {
      do {
        plVar6 = plVar4;
        plVar4 = (long *)*plVar6;
      } while ((long *)*plVar6 != (long *)0x0);
      goto LAB_03f886dc;
    }
  }
  puVar7 = (undefined8 *)plVar6[2];
  bVar3 = false;
  plVar5[2] = (long)puVar7;
LAB_03f88700:
  plVar4 = (long *)*puVar7;
  if (plVar4 == plVar6) {
    *puVar7 = plVar5;
    if (plVar6 == param_1) {
      plVar4 = (long *)0x0;
      param_1 = plVar5;
    }
    else {
      plVar4 = (long *)puVar7[1];
    }
  }
  else {
    puVar7[1] = plVar5;
  }
  lVar8 = plVar6[3];
  plVar10 = param_1;
  if (plVar6 != param_2) {
    puVar7 = (undefined8 *)param_2[2];
    plVar10 = (long *)*puVar7;
    plVar6[2] = (long)puVar7;
    puVar7[plVar10 != param_2] = plVar6;
    lVar1 = *param_2;
    lVar2 = param_2[1];
    *(long **)(lVar1 + 0x10) = plVar6;
    *plVar6 = lVar1;
    plVar6[1] = lVar2;
    if (lVar2 != 0) {
      *(long **)(lVar2 + 0x10) = plVar6;
    }
    plVar10 = plVar6;
    if (param_1 != param_2) {
      plVar10 = param_1;
    }
    *(char *)(plVar6 + 3) = (char)param_2[3];
  }
  if (((char)lVar8 != '\0') && (plVar10 != (long *)0x0)) {
    if (bVar3) {
      while( true ) {
        plVar5 = (long *)plVar4[2];
        plVar6 = plVar10;
        if ((long *)*plVar5 == plVar4) break;
        if ((char)plVar4[3] == '\0') {
          plVar6 = (long *)plVar5[1];
          *(undefined1 *)(plVar4 + 3) = 1;
          *(undefined1 *)(plVar5 + 3) = 0;
          lVar8 = *plVar6;
          plVar5[1] = lVar8;
          if (lVar8 != 0) {
            *(long **)(lVar8 + 0x10) = plVar5;
          }
          puVar7 = (undefined8 *)plVar5[2];
          plVar9 = (long *)*puVar7;
          plVar6[2] = (long)puVar7;
          puVar7[plVar9 != plVar5] = plVar6;
          *plVar6 = (long)plVar5;
          plVar9 = (long *)*plVar4;
          plVar5[2] = (long)plVar6;
          plVar6 = plVar4;
          if (plVar10 != plVar9) {
            plVar6 = plVar10;
          }
          plVar4 = (long *)plVar9[1];
        }
        plVar5 = (long *)*plVar4;
        if ((plVar5 != (long *)0x0) && ((char)plVar5[3] == '\0')) {
          plVar10 = (long *)plVar4[1];
          if (plVar10 != (long *)0x0) goto LAB_03f888e4;
LAB_03f888ec:
          lVar8 = plVar5[1];
          *(undefined1 *)(plVar5 + 3) = 1;
          *(undefined1 *)(plVar4 + 3) = 0;
          *plVar4 = lVar8;
          if (lVar8 != 0) {
            *(long **)(lVar8 + 0x10) = plVar4;
          }
          puVar7 = (undefined8 *)plVar4[2];
          plVar6 = (long *)*puVar7;
          plVar5[2] = (long)puVar7;
          puVar7[plVar6 != plVar4] = plVar5;
          plVar5[1] = (long)plVar4;
          plVar4[2] = (long)plVar5;
          plVar9 = plVar5;
          plVar10 = plVar4;
LAB_03f88934:
          plVar6 = (long *)plVar9[2];
          plVar4 = (long *)plVar6[1];
          *(char *)(plVar9 + 3) = (char)plVar6[3];
          lVar8 = *plVar4;
          *(undefined1 *)(plVar6 + 3) = 1;
          *(undefined1 *)(plVar10 + 3) = 1;
          plVar6[1] = lVar8;
          if (lVar8 != 0) {
            *(long **)(lVar8 + 0x10) = plVar6;
          }
          puVar7 = (undefined8 *)plVar6[2];
          plVar5 = (long *)*puVar7;
          plVar4[2] = (long)puVar7;
          puVar7[plVar5 != plVar6] = plVar4;
          *plVar4 = (long)plVar6;
LAB_03f88a20:
          plVar6[2] = (long)plVar4;
          return;
        }
        plVar10 = (long *)plVar4[1];
        if ((plVar10 != (long *)0x0) && ((char)plVar10[3] == '\0')) {
LAB_03f888e4:
          plVar9 = plVar4;
          if ((char)plVar10[3] != '\0') goto LAB_03f888ec;
          goto LAB_03f88934;
        }
        plVar10 = (long *)plVar4[2];
        *(undefined1 *)(plVar4 + 3) = 0;
        plVar5 = plVar6;
        if ((plVar10 == plVar6) || (plVar5 = plVar10, (char)plVar10[3] == '\0')) goto LAB_03f888d0;
LAB_03f888a8:
        plVar4 = (long *)((undefined8 *)plVar10[2])[*(long **)plVar10[2] == plVar10];
        plVar10 = plVar6;
      }
      if ((char)plVar4[3] == '\0') {
        lVar8 = plVar4[1];
        *(undefined1 *)(plVar4 + 3) = 1;
        *(undefined1 *)(plVar5 + 3) = 0;
        *plVar5 = lVar8;
        if (lVar8 != 0) {
          *(long **)(lVar8 + 0x10) = plVar5;
        }
        puVar7 = (undefined8 *)plVar5[2];
        plVar6 = (long *)*puVar7;
        plVar4[2] = (long)puVar7;
        puVar7[plVar6 != plVar5] = plVar4;
        plVar6 = plVar4;
        if (plVar10 != plVar5) {
          plVar6 = plVar10;
        }
        plVar4[1] = (long)plVar5;
        plVar5[2] = (long)plVar4;
        plVar4 = (long *)*plVar5;
      }
      plVar5 = (long *)*plVar4;
      if ((plVar5 == (long *)0x0) || (plVar10 = plVar4, (char)plVar5[3] != '\0')) {
        plVar10 = (long *)plVar4[1];
        if ((plVar10 == (long *)0x0) || ((char)plVar10[3] != '\0')) {
          plVar10 = (long *)plVar4[2];
          *(undefined1 *)(plVar4 + 3) = 0;
          plVar5 = plVar10;
          if (((char)plVar10[3] != '\0') && (plVar10 != plVar6)) goto LAB_03f888a8;
LAB_03f888d0:
          *(undefined1 *)(plVar5 + 3) = 1;
          return;
        }
        if (plVar5 != (long *)0x0) {
          plVar10 = plVar4;
          if ((char)plVar5[3] == '\0') goto LAB_03f889d8;
          plVar10 = (long *)plVar4[1];
        }
        lVar8 = *plVar10;
        *(undefined1 *)(plVar10 + 3) = 1;
        *(undefined1 *)(plVar4 + 3) = 0;
        plVar4[1] = lVar8;
        if (lVar8 != 0) {
          *(long **)(lVar8 + 0x10) = plVar4;
        }
        puVar7 = (undefined8 *)plVar4[2];
        plVar6 = (long *)*puVar7;
        plVar10[2] = (long)puVar7;
        puVar7[plVar6 != plVar4] = plVar10;
        *plVar10 = (long)plVar4;
        plVar4[2] = (long)plVar10;
        plVar5 = plVar4;
      }
LAB_03f889d8:
      plVar6 = (long *)plVar10[2];
      plVar4 = (long *)*plVar6;
      *(char *)(plVar10 + 3) = (char)plVar6[3];
      lVar8 = plVar4[1];
      *(undefined1 *)(plVar6 + 3) = 1;
      *(undefined1 *)(plVar5 + 3) = 1;
      *plVar6 = lVar8;
      if (lVar8 != 0) {
        *(long **)(lVar8 + 0x10) = plVar6;
      }
      puVar7 = (undefined8 *)plVar6[2];
      plVar5 = (long *)*puVar7;
      plVar4[2] = (long)puVar7;
      puVar7[plVar5 != plVar6] = plVar4;
      plVar4[1] = (long)plVar6;
      goto LAB_03f88a20;
    }
    *(undefined1 *)(plVar5 + 3) = 1;
  }
  return;
}

