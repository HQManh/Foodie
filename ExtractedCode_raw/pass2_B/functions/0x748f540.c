// rea decompile_all
// name: System.Runtime.Remoting.Proxies.RemotingProxy$$get_TypeName
// address: 0x748f540
// body: available
// range: 0x748f540-0x748f677 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x748f674 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void System_Runtime_Remoting_Proxies_RemotingProxy__get_TypeName(long param_1)

{
  long *plVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  code *UNRECOVERED_JUMPTABLE;
  long lVar4;
  ulong uVar5;
  int *piVar6;
  
  if ((DAT_095212e5 & 1) == 0) {
    FUN_03f5c2a4(&DAT_091825d0);
    FUN_03f5c2a4(&DAT_09186468);
    DAT_095212e5 = 1;
  }
  plVar1 = *(long **)(param_1 + 0x38);
  if (plVar1 != (long *)0x0) {
    lVar4 = *plVar1;
    if ((*(byte *)(DAT_091825d0 + 0x130) <= *(byte *)(lVar4 + 0x130)) &&
       (*(long *)(*(long *)(lVar4 + 200) + (ulong)*(byte *)(DAT_091825d0 + 0x130) * 8 + -8) ==
        DAT_091825d0)) {
      plVar1 = (long *)(**(code **)(lVar4 + 0x178))(plVar1,0,*(undefined8 *)(lVar4 + 0x180));
      if (plVar1 == (long *)0x0) goto LAB_0748f674;
      lVar4 = (**(code **)(*plVar1 + 0x1c8))(plVar1,*(undefined8 *)(*plVar1 + 0x1d0));
      if (lVar4 != 0) {
        plVar1 = (long *)(**(code **)(*plVar1 + 0x1c8))(plVar1,*(undefined8 *)(*plVar1 + 0x1d0));
        if (plVar1 == (long *)0x0) goto LAB_0748f674;
        lVar4 = *plVar1;
        uVar5 = (ulong)*(ushort *)(lVar4 + 0x12e);
        if (uVar5 != 0) {
          piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
          do {
            if (*(long *)(piVar6 + -2) == DAT_09186468) {
              puVar2 = (undefined8 *)(lVar4 + (long)*piVar6 * 0x10 + 0x138);
              goto LAB_0748f668;
            }
            uVar5 = uVar5 - 1;
            piVar6 = piVar6 + 4;
          } while (uVar5 != 0);
        }
        puVar2 = (undefined8 *)FUN_03f95da8(plVar1,DAT_09186468,0);
LAB_0748f668:
        UNRECOVERED_JUMPTABLE = (code *)*puVar2;
        uVar3 = puVar2[1];
        goto LAB_0748f5cc;
      }
    }
  }
  plVar1 = (long *)System_Runtime_Remoting_Proxies_RealProxy__GetProxiedType(param_1);
  if (plVar1 != (long *)0x0) {
    uVar3 = *(undefined8 *)(*plVar1 + 0x2f0);
    UNRECOVERED_JUMPTABLE = *(code **)(*plVar1 + 0x2e8);
LAB_0748f5cc:
                    /* WARNING: Could not recover jumptable at 0x0748f5d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)(plVar1,uVar3);
    return;
  }
LAB_0748f674:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

