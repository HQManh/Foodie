// rea decompile_all
// name: System.Runtime.Remoting.Proxies.RemotingProxy$$AttachIdentity
// address: 0x748f2b0
// body: available
// range: 0x748f2b0-0x748f53f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x748f45c to 0x3f5c248 thunk_FUN_03f5d7b8 (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x748f52c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x748f534 to 0x3f5c8d0 FUN_03f5c8d0 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x748f53c to 0x3f5c8d0 FUN_03f5c8d0 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void System_Runtime_Remoting_Proxies_RemotingProxy__AttachIdentity(long *param_1,long *param_2)

{
  long *plVar1;
  long lVar2;
  byte bVar3;
  long *plVar4;
  
  if ((DAT_095212e3 & 1) == 0) {
    FUN_03f5c2a4(&DAT_091825a8);
    FUN_03f5c2a4(&DAT_091825d0);
    FUN_03f5c2a4(&DAT_09187de0);
    DAT_095212e3 = 1;
  }
  plVar4 = param_1 + 7;
  *plVar4 = (long)param_2;
  thunk_FUN_03f5d7b8(plVar4,param_2);
  if (param_2 != (long *)0x0) {
    lVar2 = *param_2;
    bVar3 = *(byte *)(lVar2 + 0x130);
    if ((*(byte *)(DAT_091825a8 + 0x130) <= bVar3) &&
       (*(long *)(*(long *)(lVar2 + 200) + (ulong)*(byte *)(DAT_091825a8 + 0x130) * 8 + -8) ==
        DAT_091825a8)) {
      param_1[3] = param_2[0xc];
      thunk_FUN_03f5d7b8();
      param_1[4] = param_2[10];
      thunk_FUN_03f5d7b8();
      plVar1 = (long *)(**(code **)(*param_1 + 0x1a8))(param_1,*(undefined8 *)(*param_1 + 0x1b0));
      if (plVar1 != (long *)0x0) {
        if ((*(byte *)(*plVar1 + 0x130) < *(byte *)(DAT_09187de0 + 0x130)) ||
           (*(long *)(*(long *)(*plVar1 + 200) + (ulong)*(byte *)(DAT_09187de0 + 0x130) * 8 + -8) !=
            DAT_09187de0)) goto LAB_0748f538;
      }
      param_2[0xe] = (long)plVar1;
      thunk_FUN_03f5d7b8(param_2 + 0xe,plVar1);
      lVar2 = *param_2;
      bVar3 = *(byte *)(lVar2 + 0x130);
    }
    if ((bVar3 < *(byte *)(DAT_091825d0 + 0x130)) ||
       (*(long *)(*(long *)(lVar2 + 200) + (ulong)*(byte *)(DAT_091825d0 + 0x130) * 8 + -8) !=
        DAT_091825d0)) {
      lVar2 = param_2[2];
    }
    else {
      plVar1 = (long *)(**(code **)(*param_1 + 0x1a8))(param_1,*(undefined8 *)(*param_1 + 0x1b0));
      if ((*(byte *)(*param_2 + 0x130) < *(byte *)(DAT_091825d0 + 0x130)) ||
         (*(long *)(*(long *)(*param_2 + 200) + (ulong)*(byte *)(DAT_091825d0 + 0x130) * 8 + -8) !=
          DAT_091825d0)) {
LAB_0748f530:
                    /* WARNING: Subroutine does not return */
        FUN_03f5c8d0(param_2);
      }
      if (plVar1 != (long *)0x0) {
        if ((*(byte *)(*plVar1 + 0x130) < *(byte *)(DAT_09187de0 + 0x130)) ||
           (*(long *)(*(long *)(*plVar1 + 200) + (ulong)*(byte *)(DAT_09187de0 + 0x130) * 8 + -8) !=
            DAT_09187de0)) {
LAB_0748f538:
                    /* WARNING: Subroutine does not return */
          FUN_03f5c8d0(plVar1);
        }
      }
      System_Runtime_Remoting_ClientIdentity__set_ClientProxy(param_2,plVar1);
      if ((*(byte *)(*param_2 + 0x130) < *(byte *)(DAT_091825d0 + 0x130)) ||
         (*(long *)(*(long *)(*param_2 + 200) + (ulong)*(byte *)(DAT_091825d0 + 0x130) * 8 + -8) !=
          DAT_091825d0)) goto LAB_0748f530;
      plVar1 = (long *)param_2[7];
      if (plVar1 == (long *)0x0) goto LAB_0748f52c;
      lVar2 = (**(code **)(*plVar1 + 0x1e8))(plVar1,*(undefined8 *)(*plVar1 + 0x1f0));
    }
    param_1[6] = lVar2;
    thunk_FUN_03f5d7b8();
    lVar2 = *plVar4;
    if (lVar2 != 0) {
      if (*(long *)(lVar2 + 0x20) == 0) {
        param_1[10] = *(long *)(lVar2 + 0x18);
        thunk_FUN_03f5d7b8();
      }
      else {
        param_1[10] = *(long *)(lVar2 + 0x20);
        thunk_FUN_03f5d7b8(param_1 + 10);
        *(undefined1 *)(param_1 + 0xb) = 1;
      }
      param_1[0xc] = 0;
      thunk_FUN_03f5d7b8(param_1 + 0xc,0);
      return;
    }
  }
LAB_0748f52c:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

