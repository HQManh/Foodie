// rea decompile_all
// name: System.Runtime.Remoting.Messaging.ConstructionCallDictionary$$GetMethodProperty
// address: 0x74a292c
// body: available
// range: 0x74a292c-0x74a2cef inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x74a2cb8 to 0x74a2cf0 System.Runtime.Remoting.Messaging.MessageDictionary$$GetMethodProperty (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x74a2cd4 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x74a2ce0 to 0x3f5c8d0 FUN_03f5c8d0 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x74a2cec to 0x3f5c8d0 FUN_03f5c8d0 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void System_Runtime_Remoting_Messaging_ConstructionCallDictionary__GetMethodProperty
               (long param_1,undefined8 param_2)

{
  ulong uVar1;
  long lVar2;
  long *plVar3;
  undefined8 *puVar4;
  long lVar5;
  undefined8 uVar6;
  long lVar7;
  int iVar8;
  int *piVar9;
  long lVar10;
  
  if ((DAT_0952138a & 1) == 0) {
    FUN_03f5c2a4(&DAT_09185858);
    FUN_03f5c2a4(&DAT_09216a60);
    FUN_03f5c2a4(&DAT_09216a88);
    FUN_03f5c2a4(&DAT_09216a68);
    FUN_03f5c2a4(&DAT_09216a80);
    FUN_03f5c2a4(&DAT_09216a58);
    DAT_0952138a = 1;
  }
  uVar1 = System_String__op_Equality(param_2,DAT_09216a68,0);
  lVar7 = DAT_09185858;
  if ((uVar1 & 1) == 0) {
    uVar1 = System_String__op_Equality(param_2,DAT_09216a80,0);
    lVar7 = DAT_09185858;
    if ((uVar1 & 1) == 0) {
      uVar1 = System_String__op_Equality(param_2,DAT_09216a58,0);
      lVar7 = DAT_09185858;
      if ((uVar1 & 1) == 0) {
        uVar1 = System_String__op_Equality(param_2,DAT_09216a88,0);
        lVar7 = DAT_09185858;
        if ((uVar1 & 1) == 0) {
          uVar1 = System_String__op_Equality(param_2,DAT_09216a60,0);
          lVar7 = DAT_09185858;
          if ((uVar1 & 1) == 0) {
            System_Runtime_Remoting_Messaging_MessageDictionary__GetMethodProperty(param_1,param_2);
            return;
          }
          lVar10 = *(long *)(param_1 + 0x18);
          if (lVar10 == 0) goto LAB_074a2cd4;
          lVar2 = thunk_FUN_03f99350(lVar10,DAT_09185858);
          lVar5 = DAT_09185858;
          if (lVar2 == 0) goto LAB_074a2cd8;
          plVar3 = (long *)thunk_FUN_03f99350(lVar10,DAT_09185858);
          if (plVar3 == (long *)0x0) goto LAB_074a2ce4;
          lVar7 = *plVar3;
          uVar1 = (ulong)*(ushort *)(lVar7 + 0x12e);
          if (uVar1 != 0) {
            piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
            do {
              if (*(long *)(piVar9 + -2) == lVar5) {
                iVar8 = *piVar9 + 1;
                goto LAB_074a2be8;
              }
              uVar1 = uVar1 - 1;
              piVar9 = piVar9 + 4;
            } while (uVar1 != 0);
          }
          uVar6 = 1;
        }
        else {
          lVar10 = *(long *)(param_1 + 0x18);
          if (lVar10 == 0) {
LAB_074a2cd4:
                    /* WARNING: Subroutine does not return */
            FUN_03f5c550();
          }
          lVar2 = thunk_FUN_03f99350(lVar10,DAT_09185858);
          lVar5 = DAT_09185858;
          if (lVar2 == 0) {
LAB_074a2cd8:
                    /* WARNING: Subroutine does not return */
            FUN_03f5c8d0(lVar10,lVar7);
          }
          plVar3 = (long *)thunk_FUN_03f99350(lVar10,DAT_09185858);
          if (plVar3 == (long *)0x0) {
LAB_074a2ce4:
                    /* WARNING: Subroutine does not return */
            FUN_03f5c8d0(lVar10,lVar5);
          }
          lVar7 = *plVar3;
          uVar1 = (ulong)*(ushort *)(lVar7 + 0x12e);
          if (uVar1 != 0) {
            piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
            do {
              if (*(long *)(piVar9 + -2) == lVar5) {
                iVar8 = *piVar9 + 5;
                goto LAB_074a2be8;
              }
              uVar1 = uVar1 - 1;
              piVar9 = piVar9 + 4;
            } while (uVar1 != 0);
          }
          uVar6 = 5;
        }
      }
      else {
        lVar10 = *(long *)(param_1 + 0x18);
        if (lVar10 == 0) goto LAB_074a2cd4;
        lVar2 = thunk_FUN_03f99350(lVar10,DAT_09185858);
        lVar5 = DAT_09185858;
        if (lVar2 == 0) goto LAB_074a2cd8;
        plVar3 = (long *)thunk_FUN_03f99350(lVar10,DAT_09185858);
        if (plVar3 == (long *)0x0) goto LAB_074a2ce4;
        lVar7 = *plVar3;
        uVar1 = (ulong)*(ushort *)(lVar7 + 0x12e);
        if (uVar1 != 0) {
          piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
          do {
            if (*(long *)(piVar9 + -2) == lVar5) {
              lVar7 = lVar7 + (long)*piVar9 * 0x10;
              goto LAB_074a2bec;
            }
            uVar1 = uVar1 - 1;
            piVar9 = piVar9 + 4;
          } while (uVar1 != 0);
        }
        uVar6 = 0;
      }
    }
    else {
      lVar10 = *(long *)(param_1 + 0x18);
      if (lVar10 == 0) goto LAB_074a2cd4;
      lVar2 = thunk_FUN_03f99350(lVar10,DAT_09185858);
      lVar5 = DAT_09185858;
      if (lVar2 == 0) goto LAB_074a2cd8;
      plVar3 = (long *)thunk_FUN_03f99350(lVar10,DAT_09185858);
      if (plVar3 == (long *)0x0) goto LAB_074a2ce4;
      lVar7 = *plVar3;
      uVar1 = (ulong)*(ushort *)(lVar7 + 0x12e);
      if (uVar1 != 0) {
        piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
        do {
          if (*(long *)(piVar9 + -2) == lVar5) {
            iVar8 = *piVar9 + 4;
            goto LAB_074a2be8;
          }
          uVar1 = uVar1 - 1;
          piVar9 = piVar9 + 4;
        } while (uVar1 != 0);
      }
      uVar6 = 4;
    }
  }
  else {
    lVar10 = *(long *)(param_1 + 0x18);
    if (lVar10 == 0) goto LAB_074a2cd4;
    lVar2 = thunk_FUN_03f99350(lVar10,DAT_09185858);
    lVar5 = DAT_09185858;
    if (lVar2 == 0) goto LAB_074a2cd8;
    plVar3 = (long *)thunk_FUN_03f99350(lVar10,DAT_09185858);
    if (plVar3 == (long *)0x0) goto LAB_074a2ce4;
    lVar7 = *plVar3;
    uVar1 = (ulong)*(ushort *)(lVar7 + 0x12e);
    if (uVar1 != 0) {
      piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
      do {
        if (*(long *)(piVar9 + -2) == lVar5) {
          iVar8 = *piVar9 + 2;
LAB_074a2be8:
          lVar7 = lVar7 + (long)iVar8 * 0x10;
LAB_074a2bec:
          puVar4 = (undefined8 *)(lVar7 + 0x138);
          goto LAB_074a2c80;
        }
        uVar1 = uVar1 - 1;
        piVar9 = piVar9 + 4;
      } while (uVar1 != 0);
    }
    uVar6 = 2;
  }
  puVar4 = (undefined8 *)FUN_03f95da8(plVar3,lVar5,uVar6);
LAB_074a2c80:
                    /* WARNING: Could not recover jumptable at 0x074a2c94. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)*puVar4)(plVar3,puVar4[1]);
  return;
}

