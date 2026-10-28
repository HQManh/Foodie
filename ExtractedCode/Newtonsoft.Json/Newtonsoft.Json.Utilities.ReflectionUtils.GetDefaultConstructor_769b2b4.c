// rea decompile_all
// name: Newtonsoft.Json.Utilities.ReflectionUtils$$GetDefaultConstructor
// address: 0x769b2b4
// body: available
// range: 0x769b2b4-0x769b3e7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x769b3e0 to 0x4b01688 FUN_04b01688 (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x769b3e4 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void Newtonsoft_Json_Utilities_ReflectionUtils__GetDefaultConstructor(long *param_1,ulong param_2)

{
  undefined8 uVar1;
  long *plVar2;
  undefined4 uVar3;
  undefined8 *puVar4;
  long lVar5;
  undefined8 uVar6;
  
  if ((DAT_095225e7 & 1) == 0) {
    FUN_03f5c2a4(&DAT_091caa90);
    FUN_03f5c2a4(&DAT_091785f8);
    FUN_03f5c2a4(&DAT_091eeee0);
    FUN_03f5c2a4(&DAT_09193aa0);
    DAT_095225e7 = 1;
  }
  if (param_1 != (long *)0x0) {
    uVar3 = 0x34;
    if ((param_2 & 1) == 0) {
      uVar3 = 0x14;
    }
    uVar1 = (**(code **)(*param_1 + 0x6a8))(param_1,uVar3,*(undefined8 *)(*param_1 + 0x6b0));
    if (*(int *)(DAT_09193aa0 + 0xe4) == 0) {
      FUN_03f5c424(DAT_09193aa0);
    }
    puVar4 = *(undefined8 **)(DAT_09193aa0 + 0xb8);
    lVar5 = puVar4[1];
    if (lVar5 == 0) {
      if (*(int *)(DAT_09193aa0 + 0xe4) == 0) {
        FUN_03f5c424(DAT_09193aa0);
        puVar4 = *(undefined8 **)(DAT_09193aa0 + 0xb8);
      }
      uVar6 = *puVar4;
      lVar5 = thunk_FUN_03f9944c(DAT_091785f8);
      FUN_05322d94(lVar5,uVar6,DAT_091eeee0,0);
      plVar2 = (long *)(*(long *)(DAT_09193aa0 + 0xb8) + 8);
      *plVar2 = lVar5;
      thunk_FUN_03f5d7b8(plVar2,lVar5);
    }
    FUN_04b01688(uVar1,lVar5,DAT_091caa90);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

