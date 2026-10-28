// rea decompile_all
// name: Newtonsoft.Json.JsonConvert$$SerializeObjectInternal
// address: 0x763fbe8
// body: available
// range: 0x763fbe8-0x763fdf3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x763fde0 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x763fde8 to 0x3f5c548 FUN_03f5c548 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x763fdec to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x763fdf0 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x0763fde4) */

void Newtonsoft_Json_JsonConvert__SerializeObjectInternal
               (undefined8 param_1,undefined8 param_2,long *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long *plVar3;
  long *plVar4;
  ulong uVar5;
  undefined8 *puVar6;
  long lVar7;
  int *piVar8;
  
  if ((DAT_095222ac & 1) == 0) {
    FUN_03f5c2a4(&DAT_09182ff8);
    FUN_03f5c2a4(&DAT_09185a58);
    FUN_03f5c2a4(&DAT_09187470);
    FUN_03f5c2a4(&DAT_0918b348);
    FUN_03f5c2a4(&DAT_0918b438);
    DAT_095222ac = 1;
  }
  uVar1 = thunk_FUN_03f9944c(DAT_0918b348);
  System_Text_StringBuilder___ctor(uVar1,0x100,0);
  if (*(int *)(DAT_09182ff8 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  uVar2 = System_Globalization_CultureInfo__get_InvariantCulture(0);
  plVar3 = (long *)thunk_FUN_03f9944c(DAT_0918b438);
  System_IO_StringWriter___ctor(plVar3,uVar1,uVar2,0);
  plVar4 = (long *)thunk_FUN_03f9944c(DAT_09187470);
  Newtonsoft_Json_JsonTextWriter___ctor(plVar4,plVar3,0);
  if (param_3 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_03f5c550();
  }
  uVar5 = (**(code **)(*param_3 + 1000))(param_3,*(undefined8 *)(*param_3 + 0x3f0));
  if (plVar4 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_03f5c550(uVar5,uVar5 & 0xffffffff);
  }
  Newtonsoft_Json_JsonWriter__set_Formatting(plVar4,uVar5 & 0xffffffff,0);
  (**(code **)(*param_3 + 0x568))(param_3,plVar4,param_1,param_2,*(undefined8 *)(*param_3 + 0x570));
  if (plVar4 != (long *)0x0) {
    lVar7 = *plVar4;
    uVar5 = (ulong)*(ushort *)(lVar7 + 0x12e);
    if (uVar5 != 0) {
      piVar8 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
      do {
        if (*(long *)(piVar8 + -2) == DAT_09185a58) {
          puVar6 = (undefined8 *)(lVar7 + (long)*piVar8 * 0x10 + 0x138);
          goto LAB_0763fda4;
        }
        uVar5 = uVar5 - 1;
        piVar8 = piVar8 + 4;
      } while (uVar5 != 0);
    }
    puVar6 = (undefined8 *)FUN_03f95da8(plVar4,DAT_09185a58,0);
LAB_0763fda4:
    (*(code *)*puVar6)(plVar4,puVar6[1]);
  }
  if (plVar3 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_03f5c550();
  }
  (**(code **)(*plVar3 + 0x168))(plVar3,*(undefined8 *)(*plVar3 + 0x170));
  return;
}

