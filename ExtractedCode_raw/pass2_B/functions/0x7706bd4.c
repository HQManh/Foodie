// rea decompile_all
// name: Newtonsoft.Json.Converters.DiscriminatedUnionConverter$$CanConvert
// address: 0x7706bd4
// body: available
// range: 0x7706bd4-0x7706e57 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x7706e40 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x7706e44 to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x7706e50 to 0x3f5c414 FUN_03f5c414 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x7706e54 to 0x3f5c8d0 FUN_03f5c8d0 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


bool Newtonsoft_Json_Converters_DiscriminatedUnionConverter__CanConvert
               (undefined8 param_1,long *param_2)

{
  uint uVar1;
  long *plVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  char *pcVar7;
  long lVar8;
  
  if ((DAT_09522963 & 1) == 0) {
    FUN_03f5c2a4(&DAT_09184480);
    FUN_03f5c2a4(&DAT_09171bb8);
    FUN_03f5c2a4(&DAT_09180318);
    FUN_03f5c2a4(&DAT_09207db8);
    DAT_09522963 = 1;
  }
  uVar6 = DAT_09171bb8;
  if (*(int *)(DAT_095354b8 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  plVar2 = (long *)System_Type__GetTypeFromHandle(uVar6,0);
  if (plVar2 == (long *)0x0) {
LAB_07706e40:
                    /* WARNING: Subroutine does not return */
    FUN_03f5c550();
  }
  uVar3 = (**(code **)(*plVar2 + 0x2b8))(plVar2,param_2,*(undefined8 *)(*plVar2 + 0x2c0));
  if ((uVar3 & 1) == 0) {
    if ((param_2 == (long *)0x0) ||
       (lVar4 = (**(code **)(*param_2 + 0x208))(param_2,1,*(undefined8 *)(*param_2 + 0x210)),
       lVar4 == 0)) goto LAB_07706e40;
    uVar1 = *(uint *)(lVar4 + 0x18);
    if (0 < (int)uVar1) {
      lVar8 = 0;
      do {
        if (uVar1 <= (uint)lVar8) {
LAB_07706e44:
                    /* WARNING: Subroutine does not return */
          FUN_03f5c558();
        }
        lVar5 = *(long *)(lVar4 + 0x20 + lVar8 * 8);
        if ((lVar5 == 0) ||
           (plVar2 = (long *)System_Object__GetType(lVar5,0), plVar2 == (long *)0x0))
        goto LAB_07706e40;
        uVar6 = (**(code **)(*plVar2 + 0x2f8))(plVar2,*(undefined8 *)(*plVar2 + 0x300));
        uVar3 = System_String__op_Equality(uVar6,DAT_09207db8,0);
        if ((uVar3 & 1) != 0) {
          uVar6 = Newtonsoft_Json_Utilities_TypeExtensions__Assembly(plVar2,0);
          if (*(int *)(DAT_09184480 + 0xe4) == 0) {
            FUN_03f5c424(DAT_09184480);
          }
          Newtonsoft_Json_Utilities_FSharpUtils__EnsureInitialized(uVar6,0);
          if (*(int *)(DAT_09184480 + 0xe4) == 0) {
            FUN_03f5c424();
          }
          if (DAT_095226ca == '\0') {
            FUN_03f5c2a4(&DAT_09184480);
            DAT_095226ca = '\x01';
          }
          if (*(int *)(DAT_09184480 + 0xe4) == 0) {
            FUN_03f5c424();
          }
          lVar4 = *(long *)(*(long *)(DAT_09184480 + 0xb8) + 8);
          if (lVar4 != 0) {
            lVar4 = *(long *)(lVar4 + 0x28);
            plVar2 = (long *)FUN_03f5c394(DAT_09180318,2);
            if (plVar2 != (long *)0x0) {
              lVar8 = thunk_FUN_03f99350(param_2,*(undefined8 *)(*plVar2 + 0x40));
              if (lVar8 == 0) {
                uVar6 = thunk_FUN_03fa6ef4();
                    /* WARNING: Subroutine does not return */
                FUN_03f5c414(uVar6,0);
              }
              if ((int)plVar2[3] == 0) goto LAB_07706e44;
              plVar2[4] = (long)param_2;
              thunk_FUN_03f5d7b8(plVar2 + 4,param_2);
              if ((lVar4 != 0) &&
                 (plVar2 = (long *)(**(code **)(lVar4 + 0x18))
                                             (*(undefined8 *)(lVar4 + 0x40),0,plVar2,
                                              *(undefined8 *)(lVar4 + 0x28)), plVar2 != (long *)0x0)
                 ) {
                if (*(long *)(*plVar2 + 0x40) == *(long *)(DAT_09535400 + 0x40)) {
                  pcVar7 = (char *)thunk_FUN_03f99594();
                  return *pcVar7 != '\0';
                }
                    /* WARNING: Subroutine does not return */
                FUN_03f5c8d0();
              }
            }
          }
          goto LAB_07706e40;
        }
        uVar1 = *(uint *)(lVar4 + 0x18);
        lVar8 = lVar8 + 1;
      } while ((int)lVar8 < (int)uVar1);
    }
  }
  return false;
}

