// rea decompile_all
// name: System.Threading.NativeEventCalls$$CreateEvent_icall
// address: 0x762a28c
// body: available
// range: 0x762a28c-0x762a28f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void System_Threading_NativeEventCalls__CreateEvent_icall
               (uint param_1,uint param_2,long param_3,undefined8 param_4,undefined4 *param_5)

{
  void *pvVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  
  *param_5 = 0;
  if (param_3 == 0) {
    pvVar1 = operator_new(8);
    FUN_03f85bc8(pvVar1,param_1 & 1,param_2 & 1);
    puVar2 = operator_new(0x10);
    *puVar2 = &PTR_FUN_08fa94c0;
    puVar2[1] = pvVar1;
    return;
  }
  uVar3 = FUN_03fa6ecc(
                      "C:/Program Files/Unity/Hub/Editor/6000.3.24f1/Editor/Data/il2cpp/libil2cpp/icalls/mscorlib/System.Threading/NativeEventCalls.cpp(40) : Unsupported internal call for IL2CPP:NativeEventCalls::CreateEvent_internal - \"Named events are not supported.\""
                      );
                    /* WARNING: Subroutine does not return */
  FUN_03fa5c38(uVar3,0);
}

