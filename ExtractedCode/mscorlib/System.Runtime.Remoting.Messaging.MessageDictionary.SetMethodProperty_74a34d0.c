// rea decompile_all
// name: System.Runtime.Remoting.Messaging.MessageDictionary$$SetMethodProperty
// address: 0x74a34d0
// body: available
// range: 0x74a34d0-0x74a37a3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x74a3750 to 0x742e558 System.String$$op_Equality (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x74a3780 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x74a378c to 0x3f5c8d0 FUN_03f5c8d0 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x74a3798 to 0x3f5c8d0 FUN_03f5c8d0 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x74a37a0 to 0x3f5c8d0 FUN_03f5c8d0 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void System_Runtime_Remoting_Messaging_MessageDictionary__SetMethodProperty
               (long param_1,undefined8 param_2,long *param_3)

{
  long lVar1;
  uint uVar2;
  ulong uVar3;
  long lVar4;
  long *plVar5;
  undefined8 *puVar6;
  long lVar7;
  int *piVar8;
  long lVar9;
  
  if ((DAT_095213a3 & 1) == 0) {
    FUN_03f5c2a4(&DAT_09185ee0);
    FUN_03f5c2a4(&DAT_09216a70);
    FUN_03f5c2a4(&DAT_09216af8);
    FUN_03f5c2a4(&DAT_09216ac8);
    FUN_03f5c2a4(&DAT_09216af0);
    FUN_03f5c2a4(&DAT_09216ac0);
    FUN_03f5c2a4(&DAT_09216ad0);
    FUN_03f5c2a4(&DAT_09216ae0);
    FUN_03f5c2a4(&DAT_09216a78);
    DAT_095213a3 = 1;
  }
  uVar2 = <PrivateImplementationDetails>__ComputeStringHash(param_2,0);
  if (uVar2 < 0x619e9962) {
    if (uVar2 < 0x47a3b61b) {
      if (uVar2 == 0x3b0ce67b) {
        uVar3 = System_String__op_Equality(param_2,DAT_09216af8,0);
        lVar7 = DAT_09185ee0;
        if ((uVar3 & 1) != 0) {
          lVar9 = *(long *)(param_1 + 0x18);
          if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_03f5c550();
          }
          lVar4 = thunk_FUN_03f99350(lVar9,DAT_09185ee0);
          lVar1 = DAT_09185ee0;
          if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_03f5c8d0(lVar9,lVar7);
          }
          plVar5 = (long *)thunk_FUN_03f99350(lVar9,DAT_09185ee0);
          if (plVar5 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_03f5c8d0(lVar9,lVar1);
          }
          if ((param_3 != (long *)0x0) && (*param_3 != DAT_09535468)) {
                    /* WARNING: Subroutine does not return */
            FUN_03f5c8d0(param_3);
          }
          lVar7 = *plVar5;
          uVar3 = (ulong)*(ushort *)(lVar7 + 0x12e);
          if (uVar3 != 0) {
            piVar8 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
            do {
              if (*(long *)(piVar8 + -2) == lVar1) {
                puVar6 = (undefined8 *)(lVar7 + (long)(*piVar8 + 3) * 0x10 + 0x138);
                goto LAB_074a3764;
              }
              uVar3 = uVar3 - 1;
              piVar8 = piVar8 + 4;
            } while (uVar3 != 0);
          }
          puVar6 = (undefined8 *)FUN_03f95da8(plVar5,lVar1,3);
LAB_074a3764:
                    /* WARNING: Could not recover jumptable at 0x074a377c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*(code *)*puVar6)(plVar5,param_3,puVar6[1]);
          return;
        }
      }
      else if (uVar2 == 0x47a3b61a) {
        puVar6 = &DAT_09216a78;
        goto LAB_074a3738;
      }
      return;
    }
    if (uVar2 == 0x60836d56) {
      puVar6 = &DAT_09216a70;
    }
    else {
      if (uVar2 != 0x619e9961) {
        return;
      }
      puVar6 = &DAT_09216ae0;
    }
  }
  else if (uVar2 < 0x77d05181) {
    if (uVar2 == 0x74e1fd0c) {
      puVar6 = &DAT_09216ad0;
    }
    else {
      if (uVar2 != 0x77d05180) {
        return;
      }
      puVar6 = &DAT_09216af0;
    }
  }
  else if (uVar2 == 0xbcb90279) {
    puVar6 = &DAT_09216ac0;
  }
  else {
    if (uVar2 != 0xdb4b0f38) {
      return;
    }
    puVar6 = &DAT_09216ac8;
  }
LAB_074a3738:
  System_String__op_Equality(param_2,*puVar6,0);
  return;
}

