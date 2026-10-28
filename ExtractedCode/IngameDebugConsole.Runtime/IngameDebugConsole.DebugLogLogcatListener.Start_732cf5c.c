// rea decompile_all
// name: IngameDebugConsole.DebugLogLogcatListener$$Start
// address: 0x732cf5c
// body: available
// range: 0x732cf5c-0x732d12f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x732d118 to 0x85bfacc UnityEngine.AndroidJavaObject$$_Call (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x732d11c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x732d120 to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x732d12c to 0x3f5c414 FUN_03f5c414 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void IngameDebugConsole_DebugLogLogcatListener__Start(long param_1,long param_2)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  undefined8 uVar4;
  
  if ((DAT_09520607 & 1) == 0) {
    FUN_03f5c2a4(&DAT_09181140);
    FUN_03f5c2a4(&DAT_091c0270);
    FUN_03f5c2a4(&DAT_09180318);
    FUN_03f5c2a4(&DAT_0920d8f8);
    FUN_03f5c2a4(&DAT_09219550);
    DAT_09520607 = 1;
  }
  lVar1 = DAT_091c0270;
  plVar2 = (long *)(param_1 + 0x28);
  lVar3 = *plVar2;
  if (lVar3 == 0) {
    lVar3 = *(long *)(DAT_091c0270 + 0x38);
    if (lVar3 == 0) {
      FUN_03f95ac8(DAT_091c0270);
      lVar3 = *(long *)(lVar1 + 0x38);
    }
    lVar3 = *(long *)(lVar3 + 0x10);
    if ((*(ushort *)(lVar3 + 0x135) & 1) == 0) {
      lVar3 = FUN_03f95a6c();
    }
    if (*(int *)(lVar3 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    lVar1 = *(long *)(*(long *)(lVar1 + 0x38) + 0x10);
    if ((*(ushort *)(lVar1 + 0x135) & 1) == 0) {
      lVar1 = FUN_03f95a6c();
    }
    uVar4 = **(undefined8 **)(lVar1 + 0xb8);
    lVar1 = thunk_FUN_03f9944c(DAT_09181140);
    UnityEngine_AndroidJavaObject___ctor(lVar1,DAT_09219550,uVar4,0);
    *plVar2 = lVar1;
    thunk_FUN_03f5d7b8(plVar2,lVar1);
    lVar3 = *plVar2;
  }
  plVar2 = (long *)FUN_03f5c394(DAT_09180318,2);
  if (plVar2 == (long *)0x0) {
LAB_0732d11c:
                    /* WARNING: Subroutine does not return */
    FUN_03f5c550();
  }
  lVar1 = thunk_FUN_03f99350(param_1,*(undefined8 *)(*plVar2 + 0x40));
  if (lVar1 != 0) {
    if ((int)plVar2[3] != 0) {
      plVar2[4] = param_1;
      thunk_FUN_03f5d7b8(plVar2 + 4,param_1);
      if ((param_2 != 0) &&
         (lVar1 = thunk_FUN_03f99350(param_2,*(undefined8 *)(*plVar2 + 0x40)), lVar1 == 0))
      goto LAB_0732d124;
      if ((*(uint *)(plVar2 + 3) & 0xfffffffe) != 0) {
        plVar2[5] = param_2;
        thunk_FUN_03f5d7b8(plVar2 + 5,param_2);
        if (lVar3 != 0) {
          UnityEngine_AndroidJavaObject___Call(lVar3,DAT_0920d8f8,plVar2,0);
          return;
        }
        goto LAB_0732d11c;
      }
    }
                    /* WARNING: Subroutine does not return */
    FUN_03f5c558();
  }
LAB_0732d124:
  uVar4 = thunk_FUN_03fa6ef4();
                    /* WARNING: Subroutine does not return */
  FUN_03f5c414(uVar4,0);
}

