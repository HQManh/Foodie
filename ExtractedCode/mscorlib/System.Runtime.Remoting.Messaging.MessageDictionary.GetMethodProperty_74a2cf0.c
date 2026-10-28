// rea decompile_all
// name: System.Runtime.Remoting.Messaging.MessageDictionary$$GetMethodProperty
// address: 0x74a2cf0
// body: available
// range: 0x74a2cf0-0x74a3267 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x74a324c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x74a3258 to 0x3f5c8d0 FUN_03f5c8d0 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x74a3264 to 0x3f5c8d0 FUN_03f5c8d0 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8
System_Runtime_Remoting_Messaging_MessageDictionary__GetMethodProperty
          (long param_1,undefined8 param_2)

{
  uint uVar1;
  ulong uVar2;
  long lVar3;
  undefined8 *puVar4;
  long lVar5;
  undefined8 uVar6;
  long lVar7;
  int iVar8;
  int *piVar9;
  long *plVar10;
  long lVar11;
  
  if ((DAT_095213a2 & 1) == 0) {
    FUN_03f5c2a4(&DAT_091860a8);
    FUN_03f5c2a4(&DAT_091860b0);
    FUN_03f5c2a4(&DAT_09216a70);
    FUN_03f5c2a4(&DAT_09216af8);
    FUN_03f5c2a4(&DAT_09216ac8);
    FUN_03f5c2a4(&DAT_09216af0);
    FUN_03f5c2a4(&DAT_09216ac0);
    FUN_03f5c2a4(&DAT_09216ad0);
    FUN_03f5c2a4(&DAT_09216ae0);
    FUN_03f5c2a4(&DAT_09216a78);
    DAT_095213a2 = 1;
  }
  uVar1 = <PrivateImplementationDetails>__ComputeStringHash(param_2,0);
  if (uVar1 < 0x619e9962) {
    if (uVar1 < 0x47a3b61b) {
      if (uVar1 == 0x3b0ce67b) {
        uVar2 = System_String__op_Equality(param_2,DAT_09216af8,0);
        if ((uVar2 & 1) == 0) {
          return 0;
        }
        plVar10 = *(long **)(param_1 + 0x18);
        if (plVar10 == (long *)0x0) goto LAB_074a324c;
        lVar7 = *plVar10;
        uVar2 = (ulong)*(ushort *)(lVar7 + 0x12e);
        if (uVar2 != 0) {
          piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
          do {
            if (*(long *)(piVar9 + -2) == DAT_091860a8) {
              iVar8 = *piVar9 + 7;
              goto LAB_074a3230;
            }
            uVar2 = uVar2 - 1;
            piVar9 = piVar9 + 4;
          } while (uVar2 != 0);
        }
        uVar6 = 7;
        lVar5 = DAT_091860a8;
      }
      else {
        if ((uVar1 != 0x47a3b61a) ||
           (uVar2 = System_String__op_Equality(param_2,DAT_09216a78,0), (uVar2 & 1) == 0)) {
          return 0;
        }
        plVar10 = *(long **)(param_1 + 0x18);
        if (plVar10 == (long *)0x0) {
LAB_074a324c:
                    /* WARNING: Subroutine does not return */
          FUN_03f5c550();
        }
        lVar7 = *plVar10;
        uVar2 = (ulong)*(ushort *)(lVar7 + 0x12e);
        lVar5 = DAT_091860a8;
        if (uVar2 != 0) {
          piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
          do {
            if (*(long *)(piVar9 + -2) == DAT_091860a8) goto LAB_074a31ec;
            uVar2 = uVar2 - 1;
            piVar9 = piVar9 + 4;
          } while (uVar2 != 0);
        }
LAB_074a2f80:
        uVar6 = 2;
      }
    }
    else {
      if (uVar1 != 0x60836d56) {
        if (uVar1 != 0x619e9961) {
          return 0;
        }
        uVar2 = System_String__op_Equality(param_2,DAT_09216ae0,0);
        lVar7 = DAT_091860b0;
        if ((uVar2 & 1) == 0) {
          return 0;
        }
        lVar11 = *(long *)(param_1 + 0x18);
        if (lVar11 == 0) goto LAB_074a324c;
        lVar3 = thunk_FUN_03f99350(lVar11,DAT_091860b0);
        lVar5 = DAT_091860b0;
        if (lVar3 == 0) {
LAB_074a3250:
                    /* WARNING: Subroutine does not return */
          FUN_03f5c8d0(lVar11,lVar7);
        }
        plVar10 = (long *)thunk_FUN_03f99350(lVar11,DAT_091860b0);
        if (plVar10 == (long *)0x0) {
LAB_074a325c:
                    /* WARNING: Subroutine does not return */
          FUN_03f5c8d0(lVar11,lVar5);
        }
        lVar7 = *plVar10;
        uVar2 = (ulong)*(ushort *)(lVar7 + 0x12e);
        if (uVar2 != 0) {
          piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
          do {
            if (*(long *)(piVar9 + -2) == lVar5) goto LAB_074a31ec;
            uVar2 = uVar2 - 1;
            piVar9 = piVar9 + 4;
          } while (uVar2 != 0);
        }
        goto LAB_074a2f80;
      }
      uVar2 = System_String__op_Equality(param_2,DAT_09216a70,0);
      if ((uVar2 & 1) == 0) {
        return 0;
      }
      plVar10 = *(long **)(param_1 + 0x18);
      if (plVar10 == (long *)0x0) goto LAB_074a324c;
      lVar7 = *plVar10;
      uVar2 = (ulong)*(ushort *)(lVar7 + 0x12e);
      lVar5 = DAT_091860a8;
      if (uVar2 != 0) {
        piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
        do {
          if (*(long *)(piVar9 + -2) == DAT_091860a8) goto LAB_074a31f8;
          uVar2 = uVar2 - 1;
          piVar9 = piVar9 + 4;
        } while (uVar2 != 0);
      }
LAB_074a3168:
      uVar6 = 1;
    }
  }
  else if (uVar1 < 0x77d05181) {
    if (uVar1 == 0x74e1fd0c) {
      uVar2 = System_String__op_Equality(param_2,DAT_09216ad0,0);
      lVar7 = DAT_091860b0;
      if ((uVar2 & 1) == 0) {
        return 0;
      }
      lVar11 = *(long *)(param_1 + 0x18);
      if (lVar11 == 0) goto LAB_074a324c;
      lVar3 = thunk_FUN_03f99350(lVar11,DAT_091860b0);
      lVar5 = DAT_091860b0;
      if (lVar3 == 0) goto LAB_074a3250;
      plVar10 = (long *)thunk_FUN_03f99350(lVar11,DAT_091860b0);
      if (plVar10 == (long *)0x0) goto LAB_074a325c;
      lVar7 = *plVar10;
      uVar2 = (ulong)*(ushort *)(lVar7 + 0x12e);
      if (uVar2 != 0) {
        piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
        do {
          if (*(long *)(piVar9 + -2) == lVar5) goto LAB_074a31f8;
          uVar2 = uVar2 - 1;
          piVar9 = piVar9 + 4;
        } while (uVar2 != 0);
      }
      goto LAB_074a3168;
    }
    if (uVar1 != 0x77d05180) {
      return 0;
    }
    uVar2 = System_String__op_Equality(param_2,DAT_09216af0,0);
    if ((uVar2 & 1) == 0) {
      return 0;
    }
    plVar10 = *(long **)(param_1 + 0x18);
    if (plVar10 == (long *)0x0) goto LAB_074a324c;
    lVar7 = *plVar10;
    uVar2 = (ulong)*(ushort *)(lVar7 + 0x12e);
    if (uVar2 != 0) {
      piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
      do {
        if (*(long *)(piVar9 + -2) == DAT_091860a8) {
          iVar8 = *piVar9 + 6;
          goto LAB_074a3230;
        }
        uVar2 = uVar2 - 1;
        piVar9 = piVar9 + 4;
      } while (uVar2 != 0);
    }
    uVar6 = 6;
    lVar5 = DAT_091860a8;
  }
  else if (uVar1 == 0xbcb90279) {
    uVar2 = System_String__op_Equality(param_2,DAT_09216ac0,0);
    if ((uVar2 & 1) == 0) {
      return 0;
    }
    plVar10 = *(long **)(param_1 + 0x18);
    if (plVar10 == (long *)0x0) goto LAB_074a324c;
    lVar7 = *plVar10;
    uVar2 = (ulong)*(ushort *)(lVar7 + 0x12e);
    if (uVar2 != 0) {
      piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
      do {
        if (*(long *)(piVar9 + -2) == DAT_091860a8) {
          iVar8 = *piVar9 + 4;
          goto LAB_074a3230;
        }
        uVar2 = uVar2 - 1;
        piVar9 = piVar9 + 4;
      } while (uVar2 != 0);
    }
    uVar6 = 4;
    lVar5 = DAT_091860a8;
  }
  else {
    if (uVar1 != 0xdb4b0f38) {
      return 0;
    }
    uVar2 = System_String__op_Equality(param_2,DAT_09216ac8,0);
    if ((uVar2 & 1) == 0) {
      return 0;
    }
    plVar10 = *(long **)(param_1 + 0x18);
    if (plVar10 == (long *)0x0) goto LAB_074a324c;
    lVar7 = *plVar10;
    uVar2 = (ulong)*(ushort *)(lVar7 + 0x12e);
    if (uVar2 != 0) {
      piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
      do {
        if (*(long *)(piVar9 + -2) == DAT_091860a8) {
          iVar8 = *piVar9 + 5;
          goto LAB_074a3230;
        }
        uVar2 = uVar2 - 1;
        piVar9 = piVar9 + 4;
      } while (uVar2 != 0);
    }
    uVar6 = 5;
    lVar5 = DAT_091860a8;
  }
  puVar4 = (undefined8 *)FUN_03f95da8(plVar10,lVar5,uVar6);
  goto LAB_074a3238;
LAB_074a31f8:
  iVar8 = *piVar9 + 1;
  goto LAB_074a3230;
LAB_074a31ec:
  iVar8 = *piVar9 + 2;
LAB_074a3230:
  puVar4 = (undefined8 *)(lVar7 + (long)iVar8 * 0x10 + 0x138);
LAB_074a3238:
                    /* WARNING: Could not recover jumptable at 0x074a3248. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar6 = (*(code *)*puVar4)(plVar10,puVar4[1]);
  return uVar6;
}

