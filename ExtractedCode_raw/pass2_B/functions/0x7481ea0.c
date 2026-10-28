// rea decompile_all
// name: System.Runtime.Remoting.RemotingConfiguration$$RegisterTypes
// address: 0x7481ea0
// body: available
// range: 0x7481ea0-0x748231b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x748223c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x74822e8 to 0x3f5c8d0 FUN_03f5c8d0 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x74822ec to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x74822f4 to 0x3f5c8d0 FUN_03f5c8d0 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x74822fc to 0x3f5c8d0 FUN_03f5c8d0 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x7482304 to 0x3f5c8d0 FUN_03f5c8d0 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x748230c to 0x3f5c8d0 FUN_03f5c8d0 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x7482310 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x7482318 to 0x3f5c548 FUN_03f5c548 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x07482314) */

void System_Runtime_Remoting_RemotingConfiguration__RegisterTypes(long *param_1)

{
  byte bVar1;
  long *plVar2;
  undefined8 *puVar3;
  long *plVar4;
  long lVar5;
  uint uVar6;
  ulong uVar7;
  long lVar8;
  int *piVar9;
  
  if ((DAT_0952126d & 1) == 0) {
    FUN_03f5c2a4(&DAT_09180e90);
    FUN_03f5c2a4(&DAT_09180e98);
    FUN_03f5c2a4(&DAT_09185a58);
    FUN_03f5c2a4(&DAT_09185b10);
    FUN_03f5c2a4(&DAT_09189ec0);
    FUN_03f5c2a4(&DAT_0918c200);
    FUN_03f5c2a4(&DAT_0918d060);
    FUN_03f5c2a4(&DAT_0918d068);
    DAT_0952126d = 1;
  }
  if (param_1 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_03f5c550();
  }
  plVar2 = (long *)(**(code **)(*param_1 + 0x388))(param_1,*(undefined8 *)(*param_1 + 0x390));
  do {
    if (plVar2 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    lVar5 = *plVar2;
    uVar7 = (ulong)*(ushort *)(lVar5 + 0x12e);
    if (uVar7 != 0) {
      piVar9 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      do {
        if (*(long *)(piVar9 + -2) == DAT_09185b10) {
          puVar3 = (undefined8 *)(lVar5 + (long)*piVar9 * 0x10 + 0x138);
          goto LAB_07481ff0;
        }
        uVar7 = uVar7 - 1;
        piVar9 = piVar9 + 4;
      } while (uVar7 != 0);
    }
    puVar3 = (undefined8 *)FUN_03f95da8(plVar2,DAT_09185b10,0);
LAB_07481ff0:
    uVar7 = (*(code *)*puVar3)(plVar2,puVar3[1]);
    if ((uVar7 & 1) == 0) {
      plVar2 = (long *)thunk_FUN_03f99350(plVar2,DAT_09185a58);
      if (plVar2 == (long *)0x0) {
        return;
      }
      lVar5 = *plVar2;
      uVar7 = (ulong)*(ushort *)(lVar5 + 0x12e);
      if (uVar7 == 0) goto LAB_0748229c;
      piVar9 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      break;
    }
    if (plVar2 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    lVar5 = *plVar2;
    uVar7 = (ulong)*(ushort *)(lVar5 + 0x12e);
    if (uVar7 != 0) {
      piVar9 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      do {
        if (*(long *)(piVar9 + -2) == DAT_09185b10) {
          puVar3 = (undefined8 *)(lVar5 + (long)(*piVar9 + 1) * 0x10 + 0x138);
          goto LAB_07482058;
        }
        uVar7 = uVar7 - 1;
        piVar9 = piVar9 + 4;
      } while (uVar7 != 0);
    }
    puVar3 = (undefined8 *)FUN_03f95da8(plVar2,DAT_09185b10,1);
LAB_07482058:
    plVar4 = (long *)(*(code *)*puVar3)(plVar2,puVar3[1]);
    if (plVar4 != (long *)0x0) {
      lVar5 = *plVar4;
      bVar1 = *(byte *)(lVar5 + 0x130);
      uVar6 = (uint)bVar1;
      if ((bVar1 < *(byte *)(DAT_0918c200 + 0x130)) ||
         (lVar8 = *(long *)(lVar5 + 200),
         *(long *)(lVar8 + (ulong)*(byte *)(DAT_0918c200 + 0x130) * 8 + -8) != DAT_0918c200)) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c8d0(plVar4);
      }
      uVar7 = (ulong)*(byte *)(DAT_09180e90 + 0x130);
      if ((bVar1 < *(byte *)(DAT_09180e90 + 0x130)) ||
         (*(long *)(lVar8 + uVar7 * 8 + -8) != DAT_09180e90)) {
        uVar7 = (ulong)*(byte *)(DAT_09180e98 + 0x130);
        if ((bVar1 < *(byte *)(DAT_09180e98 + 0x130)) ||
           (*(long *)(lVar8 + uVar7 * 8 + -8) != DAT_09180e98)) {
          uVar7 = (ulong)*(byte *)(DAT_0918d060 + 0x130);
          if ((bVar1 < *(byte *)(DAT_0918d060 + 0x130)) ||
             (*(long *)(lVar8 + uVar7 * 8 + -8) != DAT_0918d060)) {
            uVar7 = (ulong)*(byte *)(DAT_0918d068 + 0x130);
            if ((*(byte *)(DAT_0918d068 + 0x130) <= bVar1) &&
               (*(long *)(lVar8 + uVar7 * 8 + -8) == DAT_0918d068)) {
              if (*(int *)(DAT_09189ec0 + 0xe4) == 0) {
                FUN_03f5c424();
                lVar5 = *plVar4;
                uVar6 = (uint)*(byte *)(lVar5 + 0x130);
                uVar7 = (ulong)*(byte *)(DAT_0918d068 + 0x130);
              }
              if ((uVar6 < (uint)uVar7) ||
                 (*(long *)(*(long *)(lVar5 + 200) + uVar7 * 8 + -8) != DAT_0918d068)) {
                    /* WARNING: Subroutine does not return */
                FUN_03f5c8d0(plVar4);
              }
              System_Runtime_Remoting_RemotingConfiguration__RegisterWellKnownServiceType(plVar4);
            }
          }
          else {
            if (*(int *)(DAT_09189ec0 + 0xe4) == 0) {
              FUN_03f5c424();
              lVar5 = *plVar4;
              uVar6 = (uint)*(byte *)(lVar5 + 0x130);
              uVar7 = (ulong)*(byte *)(DAT_0918d060 + 0x130);
            }
            if ((uVar6 < (uint)uVar7) ||
               (*(long *)(*(long *)(lVar5 + 200) + uVar7 * 8 + -8) != DAT_0918d060)) {
                    /* WARNING: Subroutine does not return */
              FUN_03f5c8d0(plVar4);
            }
            System_Runtime_Remoting_RemotingConfiguration__RegisterWellKnownClientType(plVar4);
          }
        }
        else {
          if (*(int *)(DAT_09189ec0 + 0xe4) == 0) {
            FUN_03f5c424();
            lVar5 = *plVar4;
            uVar6 = (uint)*(byte *)(lVar5 + 0x130);
            uVar7 = (ulong)*(byte *)(DAT_09180e98 + 0x130);
          }
          if ((uVar6 < (uint)uVar7) ||
             (*(long *)(*(long *)(lVar5 + 200) + uVar7 * 8 + -8) != DAT_09180e98)) {
                    /* WARNING: Subroutine does not return */
            FUN_03f5c8d0(plVar4);
          }
          System_Runtime_Remoting_RemotingConfiguration__RegisterActivatedServiceType(plVar4);
        }
      }
      else {
        if (*(int *)(DAT_09189ec0 + 0xe4) == 0) {
          FUN_03f5c424();
          lVar5 = *plVar4;
          uVar6 = (uint)*(byte *)(lVar5 + 0x130);
          uVar7 = (ulong)*(byte *)(DAT_09180e90 + 0x130);
        }
        if ((uVar6 < (uint)uVar7) ||
           (*(long *)(*(long *)(lVar5 + 200) + uVar7 * 8 + -8) != DAT_09180e90)) {
                    /* WARNING: Subroutine does not return */
          FUN_03f5c8d0(plVar4);
        }
        System_Runtime_Remoting_RemotingConfiguration__RegisterActivatedClientType(plVar4);
      }
    }
  } while( true );
  while( true ) {
    uVar7 = uVar7 - 1;
    piVar9 = piVar9 + 4;
    if (uVar7 == 0) break;
    if (*(long *)(piVar9 + -2) == DAT_09185a58) {
      puVar3 = (undefined8 *)(lVar5 + (long)*piVar9 * 0x10 + 0x138);
      goto LAB_074822b8;
    }
  }
LAB_0748229c:
  puVar3 = (undefined8 *)FUN_03f95da8(plVar2,DAT_09185a58,0);
LAB_074822b8:
  (*(code *)*puVar3)(plVar2,puVar3[1]);
  return;
}

