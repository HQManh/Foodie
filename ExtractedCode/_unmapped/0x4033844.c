// rea decompile_all
// name: FUN_04033844
// address: 0x4033844
// body: available
// range: 0x4033844-0x40339f7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_04033844(long *param_1,long param_2)

{
  size_t sVar1;
  long *plVar2;
  void *pvVar3;
  void *pvVar4;
  long lVar5;
  long *__dest;
  long *plVar6;
  
  pvVar4 = (void *)(param_2 + 0x2b0);
  plVar2 = param_1 + 4;
  param_1[5] = 0;
  *plVar2 = 0;
  *param_1 = param_2;
  param_1[1] = (long)plVar2;
  __dest = param_1 + 0xb;
  param_1[0xc] = 0;
  *__dest = 0;
  plVar6 = param_1 + 8;
  *plVar6 = (long)__dest;
  param_1[2] = (long)plVar2;
  param_1[3] = (long)plVar6;
  param_1[7] = 0;
  param_1[6] = 0;
  param_1[9] = (long)__dest;
  param_1[10] = (long)(param_1 + 0x13);
  param_1[0xe] = 0;
  param_1[0xd] = 0;
  param_1[0x10] = 0;
  param_1[0xf] = 0;
  param_1[0x12] = 0;
  param_1[0x11] = 0;
  pvVar3 = *(void **)(param_2 + 0x298);
  if (pvVar3 == pvVar4) {
    sVar1 = *(long *)(param_2 + 0x2a0) - (long)pvVar3;
    pvVar4 = pvVar3;
    if (sVar1 != 0) {
      memmove(plVar2,pvVar3,sVar1);
      pvVar3 = *(void **)(param_2 + 0x2a0);
      pvVar4 = *(void **)(param_2 + 0x298);
    }
    param_1[2] = (long)plVar2 + ((long)pvVar3 - (long)pvVar4);
    *(void **)(param_2 + 0x2a0) = pvVar4;
    pvVar4 = *(void **)(param_2 + 0x240);
    plVar2 = (long *)*plVar6;
    if (pvVar4 != (void *)(param_2 + 600)) goto LAB_040338e0;
LAB_04033980:
    if (plVar2 != __dest) {
      free(plVar2);
      param_1[8] = (long)__dest;
      param_1[9] = (long)__dest;
      pvVar4 = *(void **)(param_2 + 0x240);
      param_1[10] = (long)(param_1 + 0x13);
    }
    sVar1 = *(long *)(param_2 + 0x248) - (long)pvVar4;
    pvVar3 = pvVar4;
    if (sVar1 != 0) {
      memmove(__dest,pvVar4,sVar1);
      pvVar4 = *(void **)(param_2 + 0x248);
      pvVar3 = *(void **)(param_2 + 0x240);
    }
    param_1[9] = (long)__dest + ((long)pvVar4 - (long)pvVar3);
  }
  else {
    param_1[1] = (long)pvVar3;
    lVar5 = *(long *)(param_2 + 0x2a0);
    param_1[3] = *(long *)(param_2 + 0x2a8);
    param_1[2] = lVar5;
    *(void **)(param_2 + 0x298) = pvVar4;
    *(void **)(param_2 + 0x2a0) = pvVar4;
    *(long *)(param_2 + 0x2a8) = param_2 + 0x2d0;
    pvVar4 = *(void **)(param_2 + 0x240);
    plVar2 = (long *)*plVar6;
    if (pvVar4 == (void *)(param_2 + 600)) goto LAB_04033980;
LAB_040338e0:
    *plVar6 = (long)pvVar4;
    if (plVar2 == __dest) {
      lVar5 = *(long *)(param_2 + 0x248);
      param_1[10] = *(long *)(param_2 + 0x250);
      param_1[9] = lVar5;
      *(long *)(param_2 + 0x240) = param_2 + 600;
      *(long *)(param_2 + 0x248) = param_2 + 600;
      *(long *)(param_2 + 0x250) = param_2 + 0x298;
      goto LAB_040339cc;
    }
    *(long **)(param_2 + 0x240) = plVar2;
    lVar5 = param_1[9];
    param_1[9] = *(long *)(param_2 + 0x248);
    *(long *)(param_2 + 0x248) = lVar5;
    lVar5 = param_1[10];
    param_1[10] = *(long *)(param_2 + 0x250);
    pvVar3 = *(void **)(param_2 + 0x240);
    *(long *)(param_2 + 0x250) = lVar5;
  }
  *(void **)(param_2 + 0x248) = pvVar3;
LAB_040339cc:
  lVar5 = *param_1;
  *(undefined8 *)(lVar5 + 0x2a0) = *(undefined8 *)(lVar5 + 0x298);
  *(undefined8 *)(lVar5 + 0x248) = *(undefined8 *)(lVar5 + 0x240);
  return;
}

