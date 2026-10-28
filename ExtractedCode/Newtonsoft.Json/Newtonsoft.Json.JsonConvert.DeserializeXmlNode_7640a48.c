// rea decompile_all
// name: Newtonsoft.Json.JsonConvert$$DeserializeXmlNode
// address: 0x7640a48
// body: available
// range: 0x7640a48-0x7640c0f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x7640bf8 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x7640bfc to 0x3f5c8d0 FUN_03f5c8d0 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x7640c08 to 0x3f5c414 FUN_03f5c414 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x7640c0c to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void Newtonsoft_Json_JsonConvert__DeserializeXmlNode
               (undefined8 param_1,undefined8 param_2,byte param_3,byte param_4)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  long *plVar4;
  long lVar5;
  
  if ((DAT_095222ba & 1) == 0) {
    FUN_03f5c2a4(&DAT_09187300);
    FUN_03f5c2a4(&DAT_09180208);
    FUN_03f5c2a4(&DAT_09173668);
    FUN_03f5c2a4(&DAT_0918d518);
    FUN_03f5c2a4(&DAT_0918d620);
    DAT_095222ba = 1;
  }
  lVar2 = thunk_FUN_03f9944c(DAT_0918d620);
  Newtonsoft_Json_Converters_XmlNodeConverter___ctor(lVar2,0);
  if (lVar2 != 0) {
    *(undefined8 *)(lVar2 + 0x10) = param_2;
    thunk_FUN_03f5d7b8((undefined8 *)(lVar2 + 0x10),param_2);
    lVar5 = DAT_095354b8;
    *(byte *)(lVar2 + 0x18) = param_3 & 1;
    uVar3 = DAT_09173668;
    iVar1 = *(int *)(lVar5 + 0xe4);
    *(byte *)(lVar2 + 0x1a) = param_4 & 1;
    if (iVar1 == 0) {
      FUN_03f5c424();
    }
    uVar3 = System_Type__GetTypeFromHandle(uVar3,0);
    plVar4 = (long *)FUN_03f5c394(DAT_09180208,1);
    if (plVar4 != (long *)0x0) {
      lVar5 = thunk_FUN_03f99350(lVar2,*(undefined8 *)(*plVar4 + 0x40));
      if (lVar5 == 0) {
        uVar3 = thunk_FUN_03fa6ef4();
                    /* WARNING: Subroutine does not return */
        FUN_03f5c414(uVar3,0);
      }
      if ((int)plVar4[3] != 0) {
        plVar4[4] = lVar2;
        thunk_FUN_03f5d7b8(plVar4 + 4,lVar2);
        if (*(int *)(DAT_09187300 + 0xe4) == 0) {
          FUN_03f5c424();
        }
        plVar4 = (long *)Newtonsoft_Json_JsonConvert__DeserializeObject(param_1,uVar3,plVar4);
        if (plVar4 != (long *)0x0) {
          if ((*(byte *)(*plVar4 + 0x130) < *(byte *)(DAT_0918d518 + 0x130)) ||
             (*(long *)(*(long *)(*plVar4 + 200) + (ulong)*(byte *)(DAT_0918d518 + 0x130) * 8 + -8)
              != DAT_0918d518)) {
                    /* WARNING: Subroutine does not return */
            FUN_03f5c8d0();
          }
        }
        return;
      }
                    /* WARNING: Subroutine does not return */
      FUN_03f5c558();
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

