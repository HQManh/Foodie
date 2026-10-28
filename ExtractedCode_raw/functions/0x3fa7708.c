// rea decompile_all
// name: FUN_03fa7708
// address: 0x3fa7708
// body: available
// range: 0x3fa7708-0x3fa7833 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_03fa7708(long *param_1)

{
  int iVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  ulong *puVar5;
  long *plVar6;
  undefined8 *puVar7;
  long *plVar8;
  long local_220 [64];
  
  lVar3 = *param_1;
  lVar4 = *(long *)(lVar3 + 0x10);
  plVar6 = *(long **)(lVar4 + 0x10);
  if (plVar6 == (long *)**(undefined8 **)(lVar4 + 8)) {
    puVar7 = (undefined8 *)(*(undefined8 **)(lVar4 + 8))[2];
    if (puVar7 == (undefined8 *)0x0) {
      return;
    }
    plVar6 = puVar7 + 3;
    plVar8 = (long *)*puVar7;
    *(undefined8 **)(lVar4 + 8) = puVar7;
    *(long **)(lVar4 + 0x10) = plVar6;
    if (plVar6 == plVar8) {
      return;
    }
    plVar8 = puVar7 + 4;
  }
  else {
    plVar8 = plVar6 + 1;
  }
  *(long **)(lVar4 + 0x10) = plVar8;
  puVar5 = (ulong *)*plVar6;
  if (puVar5 != (ulong *)0x0) {
    iVar2 = 0;
    do {
      lVar4 = param_1[1];
      if (lVar4 == 0) {
LAB_03fa777c:
        iVar1 = iVar2 + 1;
        local_220[iVar2] = (long)puVar5;
        iVar2 = iVar1;
        if (iVar1 == 0x40) {
          (*(code *)param_1[4])(local_220,0x40,param_1[3]);
          lVar3 = *param_1;
          iVar2 = 0;
        }
      }
      else if ((*(byte *)(lVar4 + 0x130) <= *(byte *)((*puVar5 & 0xfffffffffffffffe) + 0x130)) &&
              (*(long *)(*(long *)((*puVar5 & 0xfffffffffffffffe) + 200) +
                         (ulong)*(byte *)(lVar4 + 0x130) * 8 + -8) == lVar4)) goto LAB_03fa777c;
      lVar4 = *(long *)(lVar3 + 0x10);
      plVar6 = *(long **)(lVar4 + 0x10);
      if (plVar6 == (long *)**(undefined8 **)(lVar4 + 8)) {
        puVar7 = (undefined8 *)(*(undefined8 **)(lVar4 + 8))[2];
        if (puVar7 == (undefined8 *)0x0) break;
        plVar6 = puVar7 + 3;
        plVar8 = (long *)*puVar7;
        *(undefined8 **)(lVar4 + 8) = puVar7;
        *(long **)(lVar4 + 0x10) = plVar6;
        if (plVar6 == plVar8) break;
        plVar8 = puVar7 + 4;
      }
      else {
        plVar8 = plVar6 + 1;
      }
      *(long **)(lVar4 + 0x10) = plVar8;
      puVar5 = (ulong *)*plVar6;
    } while (puVar5 != (ulong *)0x0);
    if (iVar2 != 0) {
      (*(code *)param_1[4])(local_220,iVar2,param_1[3]);
    }
  }
  return;
}

