// rea decompile_all
// name: System.Reflection.CustomAttributeData$$ResolveArguments
// address: 0x74eb0fc
// body: available
// range: 0x74eb0fc-0x74eb2ef inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void System_Reflection_CustomAttributeData__ResolveArguments(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  long local_40;
  long local_38;
  
  if ((DAT_095215e0 & 1) == 0) {
    FUN_03f5c2a4(&DAT_091c0048);
    FUN_03f5c2a4(&DAT_091c0050);
    FUN_03f5c2a4(&DAT_091c0148);
    FUN_03f5c2a4(&DAT_091c0150);
    FUN_03f5c2a4(&DAT_091c6cf0);
    FUN_03f5c2a4(&DAT_091c6cf8);
    DAT_095215e0 = 1;
  }
  local_40 = 0;
  local_38 = 0;
  lVar2 = *(long *)(param_1 + 0x28);
  if (lVar2 != 0) {
    FUN_03f65594(*(undefined8 *)(param_1 + 0x10),*(undefined8 *)(lVar2 + 0x10),
                 *(undefined8 *)(lVar2 + 0x18),*(undefined4 *)(lVar2 + 0x20),&local_38,&local_40);
    lVar2 = DAT_091c0150;
    if (local_38 == 0) {
      lVar3 = *(long *)(DAT_091c0150 + 0x38);
      if (lVar3 == 0) {
        FUN_03f95ac8(DAT_091c0150);
        lVar3 = *(long *)(lVar2 + 0x38);
      }
      lVar3 = *(long *)(lVar3 + 0x10);
      if ((*(ushort *)(lVar3 + 0x135) & 1) == 0) {
        lVar3 = FUN_03f95a6c();
      }
      if (*(int *)(lVar3 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      lVar2 = *(long *)(*(long *)(lVar2 + 0x38) + 0x10);
      if ((*(ushort *)(lVar2 + 0x135) & 1) == 0) {
        lVar2 = FUN_03f95a6c();
      }
      uVar1 = **(undefined8 **)(lVar2 + 0xb8);
    }
    else {
      uVar1 = FUN_04a7b620(local_38,DAT_091c6cf8);
    }
    uVar1 = FUN_04df1a2c(uVar1,DAT_091c0050);
    *(undefined8 *)(param_1 + 0x18) = uVar1;
    thunk_FUN_03f5d7b8();
    lVar2 = DAT_091c0148;
    if (local_40 == 0) {
      lVar3 = *(long *)(DAT_091c0148 + 0x38);
      if (lVar3 == 0) {
        FUN_03f95ac8(DAT_091c0148);
        lVar3 = *(long *)(lVar2 + 0x38);
      }
      lVar3 = *(long *)(lVar3 + 0x10);
      if ((*(ushort *)(lVar3 + 0x135) & 1) == 0) {
        lVar3 = FUN_03f95a6c();
      }
      if (*(int *)(lVar3 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      lVar2 = *(long *)(*(long *)(lVar2 + 0x38) + 0x10);
      if ((*(ushort *)(lVar2 + 0x135) & 1) == 0) {
        lVar2 = FUN_03f95a6c();
      }
      uVar1 = **(undefined8 **)(lVar2 + 0xb8);
    }
    else {
      uVar1 = FUN_04a7b508(local_40,DAT_091c6cf0);
    }
    uVar1 = FUN_04df198c(uVar1,DAT_091c0048);
    *(undefined8 *)(param_1 + 0x20) = uVar1;
    thunk_FUN_03f5d7b8((undefined8 *)(param_1 + 0x20),uVar1);
    *(undefined8 *)(param_1 + 0x28) = 0;
    thunk_FUN_03f5d7b8((long *)(param_1 + 0x28),0);
  }
  return;
}

