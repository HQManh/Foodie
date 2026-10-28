// rea decompile_all
// name: FUN_04034878
// address: 0x4034878
// body: available
// range: 0x4034878-0x4034a5b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x4034a40 to 0x89dbdd0 <EXTERNAL>::free (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_04034878(long *param_1)

{
  long *plVar1;
  void *pvVar2;
  void *pvVar3;
  long *plVar4;
  long *plVar5;
  long *plVar6;
  long lVar7;
  long lVar8;
  
  lVar8 = *param_1;
  plVar4 = (long *)param_1[1];
  plVar1 = param_1 + 4;
  pvVar3 = *(void **)(lVar8 + 0x298);
  pvVar2 = (void *)(lVar8 + 0x2b0);
  if (plVar4 == plVar1) {
    if (pvVar3 != pvVar2) {
      free(pvVar3);
      *(void **)(lVar8 + 0x298) = pvVar2;
      plVar4 = (long *)param_1[1];
      *(void **)(lVar8 + 0x2a0) = pvVar2;
      *(long *)(lVar8 + 0x2a8) = lVar8 + 0x2d0;
    }
    plVar6 = plVar4;
    if (param_1[2] - (long)plVar4 != 0) {
      memmove(pvVar2,plVar4,param_1[2] - (long)plVar4);
      plVar4 = (long *)param_1[2];
      plVar6 = (long *)param_1[1];
    }
    *(long *)(lVar8 + 0x2a0) = (long)pvVar2 + ((long)plVar4 - (long)plVar6);
LAB_04034948:
    param_1[2] = (long)plVar6;
  }
  else {
    *(long **)(lVar8 + 0x298) = plVar4;
    if (pvVar3 != pvVar2) {
      param_1[1] = (long)pvVar3;
      lVar7 = *(long *)(lVar8 + 0x2a0);
      *(long *)(lVar8 + 0x2a0) = param_1[2];
      param_1[2] = lVar7;
      lVar7 = *(long *)(lVar8 + 0x2a8);
      *(long *)(lVar8 + 0x2a8) = param_1[3];
      plVar6 = (long *)param_1[1];
      param_1[3] = lVar7;
      goto LAB_04034948;
    }
    lVar7 = param_1[2];
    *(long *)(lVar8 + 0x2a8) = param_1[3];
    *(long *)(lVar8 + 0x2a0) = lVar7;
    param_1[1] = (long)plVar1;
    param_1[2] = (long)plVar1;
    param_1[3] = (long)(param_1 + 8);
  }
  lVar8 = *param_1;
  plVar6 = (long *)param_1[8];
  plVar4 = param_1 + 0xb;
  pvVar3 = *(void **)(lVar8 + 0x240);
  pvVar2 = (void *)(lVar8 + 600);
  if (plVar6 == plVar4) {
    if (pvVar3 != pvVar2) {
      free(pvVar3);
      *(void **)(lVar8 + 0x240) = pvVar2;
      plVar6 = (long *)param_1[8];
      *(void **)(lVar8 + 0x248) = pvVar2;
      *(long *)(lVar8 + 0x250) = lVar8 + 0x298;
    }
    plVar5 = plVar6;
    if (param_1[9] - (long)plVar6 != 0) {
      memmove(pvVar2,plVar6,param_1[9] - (long)plVar6);
      plVar6 = (long *)param_1[8];
      plVar5 = (long *)param_1[9];
    }
    *(long *)(lVar8 + 0x248) = (long)pvVar2 + ((long)plVar5 - (long)plVar6);
    param_1[9] = (long)plVar6;
  }
  else {
    *(long **)(lVar8 + 0x240) = plVar6;
    if (pvVar3 == pvVar2) {
      lVar7 = param_1[9];
      *(long *)(lVar8 + 0x250) = param_1[10];
      *(long *)(lVar8 + 0x248) = lVar7;
      param_1[8] = (long)plVar4;
      param_1[9] = (long)plVar4;
      param_1[10] = (long)(param_1 + 0x13);
      goto LAB_04034a20;
    }
    param_1[8] = (long)pvVar3;
    lVar7 = *(long *)(lVar8 + 0x248);
    *(long *)(lVar8 + 0x248) = param_1[9];
    param_1[9] = lVar7;
    lVar7 = *(long *)(lVar8 + 0x250);
    *(long *)(lVar8 + 0x250) = param_1[10];
    plVar6 = (long *)param_1[8];
    param_1[9] = (long)plVar6;
    param_1[10] = lVar7;
  }
  if (plVar6 != plVar4) {
    free(plVar6);
  }
LAB_04034a20:
  if ((long *)param_1[1] != plVar1) {
    free((long *)param_1[1]);
    return;
  }
  return;
}

