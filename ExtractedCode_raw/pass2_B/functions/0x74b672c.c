// rea decompile_all
// name: System.Runtime.Serialization.Formatters.Binary.BinaryConverter$$TypeFromInfo
// address: 0x74b672c
// body: available
// range: 0x74b672c-0x74b6af3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x74b6a30 to 0x3f5c248 thunk_FUN_03f5d7b8 (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x74b6a34 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x74b6a3c to 0x3f5c8d0 FUN_03f5c8d0 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x74b6af0 to 0x3f5c414 FUN_03f5c414 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void System_Runtime_Serialization_Formatters_Binary_BinaryConverter__TypeFromInfo
               (int param_1,long *param_2,long param_3,undefined8 param_4,undefined4 *param_5,
               undefined8 *param_6,long *param_7,undefined1 *param_8)

{
  undefined4 uVar1;
  undefined8 uVar2;
  long lVar3;
  undefined4 *puVar4;
  undefined8 uVar5;
  int local_54;
  
  if ((DAT_0952144c & 1) == 0) {
    FUN_03f5c2a4(&DAT_09182b98);
    FUN_03f5c2a4(&DAT_09187008);
    DAT_0952144c = 1;
  }
  *param_8 = 0;
  *param_5 = 0;
  *param_6 = 0;
  thunk_FUN_03f5d7b8(param_6,0);
  *param_7 = 0;
  thunk_FUN_03f5d7b8(param_7,0);
  if (param_1 < 3) {
    if (param_1 == 0) {
      if (param_2 == (long *)0x0) {
LAB_074b6a34:
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      if (*(long *)(*param_2 + 0x40) != *(long *)(DAT_09187008 + 0x40)) {
LAB_074b6a38:
                    /* WARNING: Subroutine does not return */
        FUN_03f5c8d0(param_2);
      }
      puVar4 = (undefined4 *)thunk_FUN_03f99594(param_2);
      lVar3 = DAT_09182b98;
      uVar1 = *puVar4;
      *param_5 = uVar1;
      if (*(int *)(lVar3 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      uVar2 = System_Runtime_Serialization_Formatters_Binary_Converter__ToComType(uVar1);
      *param_6 = uVar2;
      thunk_FUN_03f5d7b8(param_6,uVar2);
      lVar3 = System_Runtime_Serialization_Formatters_Binary_Converter__ToType(*param_5);
    }
    else {
      if (param_1 != 1) {
        if (param_1 != 2) goto LAB_074b6a40;
        if (*(int *)(DAT_09182b98 + 0xe4) == 0) {
          FUN_03f5c424();
        }
        *param_7 = *(long *)(*(long *)(DAT_09182b98 + 0xb8) + 0xc0);
        thunk_FUN_03f5d7b8(param_7);
        goto LAB_074b6894;
      }
      if (*(int *)(DAT_09182b98 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      lVar3 = *(long *)(*(long *)(DAT_09182b98 + 0xb8) + 0x38);
    }
  }
  else if (param_1 < 6) {
    if (param_1 - 3U < 2) {
      if (param_2 == (long *)0x0) {
        return;
      }
      uVar2 = (**(code **)(*param_2 + 0x168))(param_2,*(undefined8 *)(*param_2 + 0x170));
      *param_6 = uVar2;
      thunk_FUN_03f5d7b8(param_6,uVar2);
      if (param_3 == 0) goto LAB_074b6a34;
      lVar3 = System_Runtime_Serialization_Formatters_Binary_ObjectReader__GetType
                        (param_3,param_4,*param_6);
      *param_7 = lVar3;
      thunk_FUN_03f5d7b8(param_7,lVar3);
      lVar3 = *param_7;
      if (*(int *)(DAT_09182b98 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      if (lVar3 != *(long *)(*(long *)(DAT_09182b98 + 0xb8) + 0xc0)) {
        return;
      }
LAB_074b6894:
      *param_8 = 1;
      return;
    }
    if (param_1 != 5) {
LAB_074b6a40:
      uVar2 = thunk_FUN_03fc39d4(&DAT_09180318);
      uVar2 = FUN_03f5c394(uVar2,1);
      local_54 = param_1;
      uVar5 = thunk_FUN_03fc39d4(&DAT_09181ca8);
      uVar5 = FUN_03f5c42c(uVar5,&local_54);
      uVar5 = System_Enum__ToString(uVar5,0);
      FUN_039b1d98(uVar2);
      FUN_039b0da0(uVar2,uVar5);
      FUN_039af17c(uVar2,0,uVar5);
      uVar5 = thunk_FUN_03fc39d4(&DAT_09205a08);
      uVar2 = System_Environment__GetResourceString(uVar5,uVar2,0);
      thunk_FUN_03fc39d4(&DAT_0918a948);
      uVar5 = thunk_FUN_03f9944c();
      System_Runtime_Serialization_SerializationException___ctor(uVar5,uVar2,0);
      uVar2 = thunk_FUN_03fc39d4(&DAT_091c38e0);
                    /* WARNING: Subroutine does not return */
      FUN_03f5c414(uVar5,uVar2);
    }
    if (*(int *)(DAT_09182b98 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    lVar3 = *(long *)(*(long *)(DAT_09182b98 + 0xb8) + 0xe8);
  }
  else if (param_1 == 6) {
    if (*(int *)(DAT_09182b98 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    lVar3 = *(long *)(*(long *)(DAT_09182b98 + 0xb8) + 0xf0);
  }
  else {
    if (param_1 != 7) goto LAB_074b6a40;
    if (param_2 == (long *)0x0) goto LAB_074b6a34;
    if (*(long *)(*param_2 + 0x40) != *(long *)(DAT_09187008 + 0x40)) goto LAB_074b6a38;
    puVar4 = (undefined4 *)thunk_FUN_03f99594(param_2);
    lVar3 = DAT_09182b98;
    uVar1 = *puVar4;
    *param_5 = uVar1;
    if (*(int *)(lVar3 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    lVar3 = System_Runtime_Serialization_Formatters_Binary_Converter__ToArrayType(uVar1);
  }
  *param_7 = lVar3;
  thunk_FUN_03f5d7b8(param_7);
  return;
}

