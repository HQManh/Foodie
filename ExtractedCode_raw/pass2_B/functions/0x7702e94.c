// rea decompile_all
// name: Newtonsoft.Json.Converters.BinaryConverter$$EnsureReflectionObject
// address: 0x7702e94
// body: available
// range: 0x7702e94-0x7703047 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x7703030 to 0x3f5c248 thunk_FUN_03f5d7b8 (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x7703034 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x7703038 to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x7703044 to 0x3f5c414 FUN_03f5c414 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void Newtonsoft_Json_Converters_BinaryConverter__EnsureReflectionObject(long param_1)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  
  if ((DAT_0952294f & 1) == 0) {
    FUN_03f5c2a4(&DAT_09181c10);
    FUN_03f5c2a4(&DAT_09170bb0);
    FUN_03f5c2a4(&DAT_091805f8);
    FUN_03f5c2a4(&DAT_09180748);
    FUN_03f5c2a4(&DAT_09210a48);
    DAT_0952294f = 1;
  }
  if (**(long **)(DAT_09181c10 + 0xb8) != 0) {
    return;
  }
  plVar1 = (long *)FUN_03f5c394(DAT_09180748,1);
  uVar4 = DAT_09170bb0;
  if (*(int *)(DAT_095354b8 + 0xe4) == 0) {
    FUN_03f5c424(DAT_095354b8);
  }
  lVar2 = System_Type__GetTypeFromHandle(uVar4,0);
  if (plVar1 != (long *)0x0) {
    if ((lVar2 != 0) &&
       (lVar3 = thunk_FUN_03f99350(lVar2,*(undefined8 *)(*plVar1 + 0x40)), lVar3 == 0)) {
      uVar4 = thunk_FUN_03fa6ef4();
                    /* WARNING: Subroutine does not return */
      FUN_03f5c414(uVar4,0);
    }
    if ((int)plVar1[3] == 0) {
LAB_07703038:
                    /* WARNING: Subroutine does not return */
      FUN_03f5c558();
    }
    plVar1[4] = lVar2;
    thunk_FUN_03f5d7b8(plVar1 + 4,lVar2);
    if (param_1 != 0) {
      uVar4 = System_Type__GetConstructor(param_1,plVar1,0);
      lVar2 = FUN_03f5c394(DAT_091805f8,1);
      if (lVar2 != 0) {
        if (*(int *)(lVar2 + 0x18) != 0) {
          *(undefined8 *)(lVar2 + 0x20) = DAT_09210a48;
          thunk_FUN_03f5d7b8();
          uVar4 = Newtonsoft_Json_Utilities_ReflectionObject__Create(param_1,uVar4,lVar2,0);
          **(undefined8 **)(DAT_09181c10 + 0xb8) = uVar4;
          thunk_FUN_03f5d7b8(*(undefined8 *)(DAT_09181c10 + 0xb8),uVar4);
          return;
        }
        goto LAB_07703038;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

