// rea decompile_all
// name: Newtonsoft.Json.JsonValidatingReader$$ValidateFloat
// address: 0x7676948
// body: available
// range: 0x7676948-0x7676e37 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x7676e34 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void Newtonsoft_Json_JsonValidatingReader__ValidateFloat(long param_1,long param_2)

{
  ulong uVar1;
  long *plVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  double dVar6;
  undefined8 local_50;
  undefined8 uStack_48;
  
  if ((DAT_095224a5 & 1) == 0) {
    FUN_03f5c2a4(&DAT_09182b88);
    FUN_03f5c2a4(&DAT_09182ff8);
    FUN_03f5c2a4(&DAT_09187300);
    FUN_03f5c2a4(&DAT_09187488);
    FUN_03f5c2a4(&DAT_091b6d58);
    FUN_03f5c2a4(&DAT_091b6d60);
    FUN_03f5c2a4(&DAT_0917dc60);
    FUN_03f5c2a4(&DAT_09202c18);
    FUN_03f5c2a4(&DAT_09202c28);
    FUN_03f5c2a4(&DAT_09202c20);
    FUN_03f5c2a4(&DAT_09202c10);
    FUN_03f5c2a4(&DAT_09202c30);
    DAT_095224a5 = 1;
  }
  if ((param_2 != 0) &&
     (uVar1 = Newtonsoft_Json_JsonValidatingReader__TestType(param_1,param_2,2), (uVar1 & 1) != 0))
  {
    Newtonsoft_Json_JsonValidatingReader__ValidateNotDisallowed(param_1,param_2);
    plVar2 = *(long **)(param_1 + 0x78);
    if (plVar2 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    uVar3 = (**(code **)(*plVar2 + 0x248))(plVar2,*(undefined8 *)(*plVar2 + 0x250));
    if (*(int *)(DAT_09182ff8 + 0xe4) == 0) {
      FUN_03f5c424(DAT_09182ff8);
    }
    uVar4 = System_Globalization_CultureInfo__get_InvariantCulture(0);
    if (*(int *)(DAT_09182b88 + 0xe4) == 0) {
      FUN_03f5c424(DAT_09182b88);
    }
    dVar6 = (double)System_Convert__ToDouble(uVar3,uVar4,0);
    if (*(char *)(param_2 + 0x48) != '\0') {
      if (*(double *)(param_2 + 0x50) < dVar6) {
        if (*(int *)(DAT_09182ff8 + 0xe4) == 0) {
          FUN_03f5c424();
        }
        uVar3 = System_Globalization_CultureInfo__get_InvariantCulture(0);
        if (*(int *)(DAT_09187300 + 0xe4) == 0) {
          FUN_03f5c424(DAT_09187300);
        }
        uVar4 = Newtonsoft_Json_JsonConvert__ToString(dVar6,0);
        uStack_48 = *(undefined8 *)(param_2 + 0x50);
        local_50 = *(undefined8 *)(param_2 + 0x48);
        uVar5 = FUN_03f5c42c(DAT_0917dc60,&local_50);
        uVar3 = Newtonsoft_Json_Utilities_StringUtils__FormatWith(DAT_09202c20,uVar3,uVar4,uVar5,0);
        Newtonsoft_Json_JsonValidatingReader__RaiseError(param_1,uVar3);
      }
      if (((*(char *)(param_2 + 0x59) != '\0') && (dVar6 == *(double *)(param_2 + 0x50))) &&
         (*(char *)(param_2 + 0x48) != '\0')) {
        if (*(int *)(DAT_09182ff8 + 0xe4) == 0) {
          FUN_03f5c424();
        }
        uVar3 = System_Globalization_CultureInfo__get_InvariantCulture(0);
        if (*(int *)(DAT_09187300 + 0xe4) == 0) {
          FUN_03f5c424(DAT_09187300);
        }
        uVar4 = Newtonsoft_Json_JsonConvert__ToString(dVar6,0);
        uStack_48 = *(undefined8 *)(param_2 + 0x50);
        local_50 = *(undefined8 *)(param_2 + 0x48);
        uVar5 = FUN_03f5c42c(DAT_0917dc60,&local_50);
        uVar3 = Newtonsoft_Json_Utilities_StringUtils__FormatWith(DAT_09202c10,uVar3,uVar4,uVar5,0);
        Newtonsoft_Json_JsonValidatingReader__RaiseError(param_1,uVar3);
      }
    }
    if (*(char *)(param_2 + 0x38) != '\0') {
      if (dVar6 < *(double *)(param_2 + 0x40)) {
        if (*(int *)(DAT_09182ff8 + 0xe4) == 0) {
          FUN_03f5c424();
        }
        uVar3 = System_Globalization_CultureInfo__get_InvariantCulture(0);
        if (*(int *)(DAT_09187300 + 0xe4) == 0) {
          FUN_03f5c424(DAT_09187300);
        }
        uVar4 = Newtonsoft_Json_JsonConvert__ToString(dVar6,0);
        uStack_48 = *(undefined8 *)(param_2 + 0x40);
        local_50 = *(undefined8 *)(param_2 + 0x38);
        uVar5 = FUN_03f5c42c(DAT_0917dc60,&local_50);
        uVar3 = Newtonsoft_Json_Utilities_StringUtils__FormatWith(DAT_09202c28,uVar3,uVar4,uVar5,0);
        Newtonsoft_Json_JsonValidatingReader__RaiseError(param_1,uVar3);
      }
      if (((*(char *)(param_2 + 0x58) != '\0') && (dVar6 == *(double *)(param_2 + 0x40))) &&
         (*(char *)(param_2 + 0x38) != '\0')) {
        if (*(int *)(DAT_09182ff8 + 0xe4) == 0) {
          FUN_03f5c424();
        }
        uVar3 = System_Globalization_CultureInfo__get_InvariantCulture(0);
        if (*(int *)(DAT_09187300 + 0xe4) == 0) {
          FUN_03f5c424(DAT_09187300);
        }
        uVar4 = Newtonsoft_Json_JsonConvert__ToString(dVar6,0);
        uStack_48 = *(undefined8 *)(param_2 + 0x40);
        local_50 = *(undefined8 *)(param_2 + 0x38);
        uVar5 = FUN_03f5c42c(DAT_0917dc60,&local_50);
        uVar3 = Newtonsoft_Json_Utilities_StringUtils__FormatWith(DAT_09202c18,uVar3,uVar4,uVar5,0);
        Newtonsoft_Json_JsonValidatingReader__RaiseError(param_1,uVar3);
      }
    }
    if (*(char *)(param_2 + 0x28) != '\0') {
      uVar3 = *(undefined8 *)(param_2 + 0x30);
      if (*(int *)(DAT_09187488 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      Newtonsoft_Json_JsonValidatingReader__FloatingPointRemainder(dVar6,uVar3);
      uVar1 = Newtonsoft_Json_JsonValidatingReader__IsZero();
      if ((uVar1 & 1) == 0) {
        if (*(int *)(DAT_09182ff8 + 0xe4) == 0) {
          FUN_03f5c424();
        }
        uVar3 = System_Globalization_CultureInfo__get_InvariantCulture(0);
        if (*(int *)(DAT_09187300 + 0xe4) == 0) {
          FUN_03f5c424(DAT_09187300);
        }
        uVar4 = Newtonsoft_Json_JsonConvert__ToString(dVar6,0);
        uStack_48 = *(undefined8 *)(param_2 + 0x30);
        local_50 = *(undefined8 *)(param_2 + 0x28);
        uVar5 = FUN_03f5c42c(DAT_0917dc60,&local_50);
        uVar3 = Newtonsoft_Json_Utilities_StringUtils__FormatWith(DAT_09202c30,uVar3,uVar4,uVar5,0);
        Newtonsoft_Json_JsonValidatingReader__RaiseError(param_1,uVar3);
      }
    }
  }
  return;
}

