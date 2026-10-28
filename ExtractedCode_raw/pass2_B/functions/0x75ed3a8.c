// rea decompile_all
// name: System.Enum$$ToString
// address: 0x75ed3a8
// body: available
// range: 0x75ed3a8-0x75ed3ab inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void System_Enum__ToString(long *param_1,long param_2)

{
  int iVar1;
  long *plVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  
  if ((DAT_09521efe & 1) == 0) {
    FUN_03f5c2a4(&DAT_0918a400);
    FUN_03f5c2a4(&DAT_09202fc8);
    FUN_03f5c2a4(&DAT_091ffb80);
    FUN_03f5c2a4(&DAT_092134c8);
    FUN_03f5c2a4(&DAT_092020e8);
    DAT_09521efe = 1;
  }
  lVar5 = DAT_09202fc8;
  if ((param_2 != 0) && (*(int *)(param_2 + 0x10) != 0)) {
    lVar5 = param_2;
  }
  iVar1 = System_String__Compare(lVar5,DAT_09202fc8,5,0);
  if (iVar1 == 0) {
    lVar5 = *param_1;
  }
  else {
    iVar1 = System_String__Compare(lVar5,DAT_091ffb80,5,0);
    if (iVar1 != 0) {
      iVar1 = System_String__Compare(lVar5,DAT_092134c8,5,0);
      if (iVar1 == 0) {
        uVar3 = FUN_03f72c2c(param_1);
        if (*(int *)(DAT_09535470 + 0xe4) == 0) {
          FUN_03f5c424(DAT_09535470);
        }
        System_Enum__InternalFormattedHexString(uVar3);
        return;
      }
      iVar1 = System_String__Compare(lVar5,DAT_092020e8,5,0);
      if (iVar1 != 0) {
        uVar3 = thunk_FUN_03fc39d4(&DAT_09202d68);
        uVar3 = System_Environment__GetResourceString(uVar3,0);
        thunk_FUN_03fc39d4(&DAT_09184908);
        uVar4 = thunk_FUN_03f9944c();
        System_FormatException___ctor(uVar4,uVar3,0);
        uVar3 = thunk_FUN_03fc39d4(&DAT_091c9078);
                    /* WARNING: Subroutine does not return */
        FUN_03f5c414(uVar4,uVar3);
      }
      plVar2 = (long *)System_Object__GetType(param_1,0);
      uVar3 = FUN_03f72c2c(param_1);
      if (*(int *)(DAT_09535470 + 0xe4) == 0) {
        FUN_03f5c424(DAT_09535470);
      }
      if (plVar2 != (long *)0x0) {
        if ((*(byte *)(*plVar2 + 0x130) < *(byte *)(DAT_0918a400 + 0x130)) ||
           (*(long *)(*(long *)(*plVar2 + 200) + (ulong)*(byte *)(DAT_0918a400 + 0x130) * 8 + -8) !=
            DAT_0918a400)) {
                    /* WARNING: Subroutine does not return */
          FUN_03f5c8d0(plVar2);
        }
      }
      System_Enum__InternalFlagsFormat(plVar2,uVar3);
      return;
    }
    param_1 = (long *)FUN_03f72c2c(param_1);
    if (param_1 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    lVar5 = *param_1;
  }
                    /* WARNING: Could not recover jumptable at 0x075ed504. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar5 + 0x168))(param_1,*(undefined8 *)(lVar5 + 0x170));
  return;
}

