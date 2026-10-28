// rea decompile_all
// name: FUN_03faeab8
// address: 0x3faeab8
// body: available
// range: 0x3faeab8-0x3faeba3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_03faeab8(void *param_1,long param_2)

{
  undefined1 uVar1;
  void *pvVar2;
  long lVar3;
  undefined8 uVar4;
  byte local_38 [16];
  void *local_28;
  
  pthread_setspecific(*DAT_095352e0,param_1);
  uVar4 = *(undefined8 *)(param_2 + 0x10);
  pvVar2 = pthread_getspecific(*DAT_095352e0);
  FUN_03f5ef9c(*(long *)((long)pvVar2 + 0x10) + 0x70,uVar4);
  FUN_03faebe0(param_1);
  FUN_03faec6c();
  FUN_03fa8378(*(undefined8 *)(*(long *)((long)param_1 + 0x10) + 0x50));
  lVar3 = *(long *)((long)param_1 + 0x10);
  if (*(long *)(lVar3 + 0x28) != 0) {
    FUN_03f926e8(local_38);
    pvVar2 = (void *)((ulong)local_38 | 1);
    if ((local_38[0] & 1) != 0) {
      pvVar2 = local_28;
    }
    FUN_03f86f6c(*(undefined8 *)(*(long *)((long)param_1 + 0x10) + 0x18),pvVar2);
    if ((local_38[0] & 1) != 0) {
      operator_delete(local_28);
    }
    lVar3 = *(long *)((long)param_1 + 0x10);
  }
  uVar1 = FUN_03f86e10(*(undefined8 *)(lVar3 + 0x18));
  *(undefined1 *)(*(long *)((long)param_1 + 0x10) + 0xb0) = uVar1;
  thunk_FUN_03f8a2a0(param_1);
  if (*(int *)(*(long *)((long)param_1 + 0x10) + 0x98) != 0) {
    FUN_03faed48(param_1);
  }
  return;
}

