// rea decompile_all
// name: System.Runtime.Remoting.Lifetime.Lease$$CheckNextSponsor
// address: 0x748fe84
// body: available
// range: 0x748fe84-0x749002b inclusive
// range: 0x74900e0-0x74900e3 inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x748ff44 to 0x3f5c8d0 FUN_03f5c8d0 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x748ff68 to 0x3f5c248 thunk_FUN_03f5d7b8 (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x7490028 to 0x89db2b8 FUN_089db2b8 (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x74900e0 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void System_Runtime_Remoting_Lifetime_Lease__CheckNextSponsor(long param_1)

{
  int iVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  undefined8 *puVar5;
  ulong uVar6;
  int *piVar7;
  long *plVar8;
  
  if ((DAT_095212ed & 1) == 0) {
    FUN_03f5c2a4(&DAT_09185610);
    FUN_03f5c2a4(&DAT_09186688);
    FUN_03f5c2a4(&DAT_091d2360);
    FUN_03f5c2a4(&DAT_09192220);
    FUN_03f5c2a4(&DAT_0918ceb8);
    DAT_095212ed = 1;
  }
  plVar8 = (long *)(param_1 + 0x48);
  plVar2 = (long *)*plVar8;
  if (plVar2 != (long *)0x0) {
    iVar1 = (**(code **)(*plVar2 + 0x1d8))(plVar2,*(undefined8 *)(*plVar2 + 0x1e0));
    if (iVar1 == 0) {
      *(undefined8 *)(param_1 + 0x48) = 0;
      *(undefined4 *)(param_1 + 0x20) = 4;
      thunk_FUN_03f5d7b8(plVar8,0);
      return;
    }
    plVar8 = (long *)*plVar8;
    if (plVar8 != (long *)0x0) {
      lVar3 = (**(code **)(*plVar8 + 600))(plVar8,*(undefined8 *)(*plVar8 + 0x260));
      lVar4 = DAT_09186688;
      if (lVar3 == 0) {
        plVar2 = (long *)0x0;
      }
      else {
        plVar2 = (long *)thunk_FUN_03f99350(lVar3,DAT_09186688);
        if (plVar2 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_03f5c8d0(lVar3,lVar4);
        }
      }
      lVar4 = thunk_FUN_03f9944c(DAT_09192220);
      if (plVar2 != (long *)0x0) {
        lVar3 = *plVar2;
        uVar6 = (ulong)*(ushort *)(lVar3 + 0x12e);
        if (uVar6 != 0) {
          piVar7 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
          do {
            if (*(long *)(piVar7 + -2) == DAT_09186688) {
              lVar3 = lVar3 + (long)*piVar7 * 0x10 + 0x138;
              goto LAB_0748ffd4;
            }
            uVar6 = uVar6 - 1;
            piVar7 = piVar7 + 4;
          } while (uVar6 != 0);
        }
        lVar3 = FUN_03f95da8(plVar2,DAT_09186688,0);
LAB_0748ffd4:
        System_Runtime_Remoting_Lifetime_Lease_RenewalDelegate___ctor
                  (lVar4,plVar2,*(undefined8 *)(lVar3 + 8),0);
        plVar2 = (long *)(param_1 + 0x50);
        *plVar2 = lVar4;
        thunk_FUN_03f5d7b8(plVar2,lVar4);
        if ((*plVar2 != 0) &&
           (puVar5 = (undefined8 *)
                     System_Runtime_Remoting_Lifetime_Lease_RenewalDelegate__BeginInvoke
                               (*plVar2,param_1,0,0,0), puVar5 != (undefined8 *)0x0)) {
          FUN_089db2b8(*puVar5);
          return;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

