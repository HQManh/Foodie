// rea decompile_all
// name: FUN_04041004
// address: 0x4041004
// body: available
// range: 0x4041004-0x4041123 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x404111c to 0x89dbdc0 <EXTERNAL>::abort (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x4041120 to 0x89dbdc0 <EXTERNAL>::abort (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_04041004(undefined8 *param_1)

{
  void *pvVar1;
  long lVar2;
  size_t sVar3;
  ulong uVar4;
  undefined8 *puVar5;
  long lVar6;
  undefined *local_48;
  undefined1 local_40;
  undefined2 local_3f;
  undefined8 local_38;
  
  puVar5 = (undefined8 *)*param_1;
  lVar6 = param_1[1];
  lVar2 = puVar5[1];
  pvVar1 = (void *)*puVar5;
  uVar4 = lVar2 + 1;
  *(int *)(puVar5 + 4) = *(int *)(puVar5 + 4) + 1;
  if ((ulong)puVar5[2] < uVar4) {
    sVar3 = puVar5[2] * 2;
    uVar4 = lVar2 + 0x3e1;
    if (sVar3 < uVar4 || sVar3 - uVar4 == 0) {
      sVar3 = uVar4;
    }
    puVar5[2] = sVar3;
    pvVar1 = realloc(pvVar1,sVar3);
    *puVar5 = pvVar1;
    if (pvVar1 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
      abort();
    }
    lVar2 = puVar5[1];
    uVar4 = lVar2 + 1;
  }
  puVar5[1] = uVar4;
  *(undefined1 *)((long)pvVar1 + lVar2) = 0x28;
  local_38 = *(undefined8 *)(lVar6 + 0x10);
  local_40 = 0x2a;
  local_3f = 0x540;
  local_48 = &UNK_08faf4d8;
  FUN_04041124(&local_48,*param_1);
  param_1 = (undefined8 *)*param_1;
  lVar2 = param_1[1];
  pvVar1 = (void *)*param_1;
  uVar4 = lVar2 + 1;
  *(int *)(param_1 + 4) = *(int *)(param_1 + 4) + -1;
  if ((ulong)param_1[2] < uVar4) {
    sVar3 = param_1[2] * 2;
    uVar4 = lVar2 + 0x3e1;
    if (sVar3 < uVar4 || sVar3 - uVar4 == 0) {
      sVar3 = uVar4;
    }
    param_1[2] = sVar3;
    pvVar1 = realloc(pvVar1,sVar3);
    *param_1 = pvVar1;
    if (pvVar1 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
      abort();
    }
    lVar2 = param_1[1];
    uVar4 = lVar2 + 1;
  }
  param_1[1] = uVar4;
  *(undefined1 *)((long)pvVar1 + lVar2) = 0x29;
  return;
}

