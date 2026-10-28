// rea decompile_all
// name: System.Text.Decoder$$Reset
// address: 0x763b164
// body: available
// range: 0x763b164-0x763b283 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void System_Text_Decoder__Reset(long *param_1)

{
  undefined4 uVar1;
  long lVar2;
  undefined8 uVar3;
  long *plVar4;
  long lVar5;
  undefined8 uVar6;
  
  if ((DAT_0952225f & 1) == 0) {
    FUN_03f5c2a4(&DAT_091c00c8);
    FUN_03f5c2a4(&DAT_0917fcc8);
    DAT_0952225f = 1;
  }
  lVar2 = DAT_091c00c8;
  lVar5 = *(long *)(DAT_091c00c8 + 0x38);
  if (lVar5 == 0) {
    FUN_03f95ac8(DAT_091c00c8);
    lVar5 = *(long *)(lVar2 + 0x38);
  }
  lVar5 = *(long *)(lVar5 + 0x10);
  if ((*(ushort *)(lVar5 + 0x135) & 1) == 0) {
    lVar5 = FUN_03f95a6c();
  }
  if (*(int *)(lVar5 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  lVar2 = *(long *)(*(long *)(lVar2 + 0x38) + 0x10);
  if ((*(ushort *)(lVar2 + 0x135) & 1) == 0) {
    lVar2 = FUN_03f95a6c();
  }
  uVar6 = **(undefined8 **)(lVar2 + 0xb8);
  uVar1 = (**(code **)(*param_1 + 0x198))(param_1,uVar6,0,0,1,*(undefined8 *)(*param_1 + 0x1a0));
  uVar3 = FUN_03f5c394(DAT_0917fcc8,uVar1);
  (**(code **)(*param_1 + 0x1c8))(param_1,uVar6,0,0,uVar3,0,1,*(undefined8 *)(*param_1 + 0x1d0));
  plVar4 = (long *)param_1[3];
  if (plVar4 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0763b274. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar4 + 0x1a8))(plVar4,*(undefined8 *)(*plVar4 + 0x1b0));
    return;
  }
  return;
}

