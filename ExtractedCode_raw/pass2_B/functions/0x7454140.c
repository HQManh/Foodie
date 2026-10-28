// rea decompile_all
// name: System.Security.PermissionSet$$ToXml
// address: 0x7454140
// body: available
// range: 0x7454140-0x745450b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x74544e8 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x74544f4 to 0x3f5c8d0 FUN_03f5c8d0 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x74544f8 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x74544fc to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x7454500 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x7454508 to 0x3f5c548 FUN_03f5c548 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x07454504) */

long System_Security_PermissionSet__ToXml(long param_1)

{
  long lVar1;
  long *plVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  long *plVar5;
  long lVar6;
  ulong uVar7;
  int *piVar8;
  undefined4 local_44;
  
  if ((DAT_09521114 & 1) == 0) {
    FUN_03f5c2a4(&DAT_09185a58);
    FUN_03f5c2a4(&DAT_09185b10);
    FUN_03f5c2a4(&DAT_09186288);
    FUN_03f5c2a4(&DAT_09186590);
    FUN_03f5c2a4(&DAT_0918a7f0);
    FUN_03f5c2a4(&DAT_0920a760);
    FUN_03f5c2a4(&DAT_09218d48);
    FUN_03f5c2a4(&DAT_092125c8);
    FUN_03f5c2a4(&DAT_09224438);
    FUN_03f5c2a4(&DAT_09225478);
    DAT_09521114 = 1;
  }
  local_44 = 0;
  lVar1 = thunk_FUN_03f9944c(DAT_0918a7f0);
  System_Security_SecurityElement___ctor(lVar1,DAT_0920a760,0);
  plVar2 = (long *)System_Object__GetType(param_1,0);
  if ((plVar2 != (long *)0x0) &&
     (uVar3 = (**(code **)(*plVar2 + 0x2f8))(plVar2,*(undefined8 *)(*plVar2 + 0x300)), lVar1 != 0))
  {
    System_Security_SecurityElement__AddAttribute(lVar1,DAT_09218d48,uVar3);
    local_44 = 1;
    uVar3 = System_Int32__ToString(&local_44,0);
    System_Security_SecurityElement__AddAttribute(lVar1,DAT_09225478,uVar3);
    if (*(int *)(param_1 + 0x10) == 1) {
      System_Security_SecurityElement__AddAttribute(lVar1,DAT_092125c8,DAT_09224438);
    }
    plVar2 = *(long **)(param_1 + 0x18);
    if (plVar2 != (long *)0x0) {
      plVar2 = (long *)(**(code **)(*plVar2 + 0x388))(plVar2,*(undefined8 *)(*plVar2 + 0x390));
      do {
        if (plVar2 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_03f5c550();
        }
        lVar6 = *plVar2;
        uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
        if (uVar7 != 0) {
          piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
          do {
            if (*(long *)(piVar8 + -2) == DAT_09185b10) {
              puVar4 = (undefined8 *)(lVar6 + (long)*piVar8 * 0x10 + 0x138);
              goto LAB_0745434c;
            }
            uVar7 = uVar7 - 1;
            piVar8 = piVar8 + 4;
          } while (uVar7 != 0);
        }
        puVar4 = (undefined8 *)FUN_03f95da8(plVar2,DAT_09185b10,0);
LAB_0745434c:
        uVar7 = (*(code *)*puVar4)(plVar2,puVar4[1]);
        if ((uVar7 & 1) == 0) {
          plVar2 = (long *)thunk_FUN_03f99350(plVar2,DAT_09185a58);
          if (plVar2 == (long *)0x0) {
            return lVar1;
          }
          lVar6 = *plVar2;
          uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
          if (uVar7 == 0) goto LAB_0745449c;
          piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
          goto LAB_07454484;
        }
        if (plVar2 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_03f5c550();
        }
        lVar6 = *plVar2;
        uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
        if (uVar7 != 0) {
          piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
          do {
            if (*(long *)(piVar8 + -2) == DAT_09185b10) {
              puVar4 = (undefined8 *)(lVar6 + (long)(*piVar8 + 1) * 0x10 + 0x138);
              goto LAB_074543b4;
            }
            uVar7 = uVar7 - 1;
            piVar8 = piVar8 + 4;
          } while (uVar7 != 0);
        }
        puVar4 = (undefined8 *)FUN_03f95da8(plVar2,DAT_09185b10,1);
LAB_074543b4:
        lVar6 = (*(code *)*puVar4)(plVar2,puVar4[1]);
        uVar3 = DAT_09186288;
        if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_03f5c550();
        }
        plVar5 = (long *)thunk_FUN_03f99350(lVar6,DAT_09186288);
        if (plVar5 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_03f5c8d0(lVar6,uVar3);
        }
        lVar6 = *plVar5;
        uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
        if (uVar7 != 0) {
          piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
          do {
            if (*(long *)(piVar8 + -2) == DAT_09186590) {
              puVar4 = (undefined8 *)(lVar6 + (long)*piVar8 * 0x10 + 0x138);
              goto LAB_0745442c;
            }
            uVar7 = uVar7 - 1;
            piVar8 = piVar8 + 4;
          } while (uVar7 != 0);
        }
        puVar4 = (undefined8 *)FUN_03f95da8(plVar5,DAT_09186590,0);
LAB_0745442c:
        uVar3 = (*(code *)*puVar4)(plVar5,puVar4[1]);
        System_Security_SecurityElement__AddChild(lVar1,uVar3);
      } while( true );
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
  while( true ) {
    uVar7 = uVar7 - 1;
    piVar8 = piVar8 + 4;
    if (uVar7 == 0) break;
LAB_07454484:
    if (*(long *)(piVar8 + -2) == DAT_09185a58) {
      puVar4 = (undefined8 *)(lVar6 + (long)*piVar8 * 0x10 + 0x138);
      goto LAB_074544b8;
    }
  }
LAB_0745449c:
  puVar4 = (undefined8 *)FUN_03f95da8(plVar2,DAT_09185a58,0);
LAB_074544b8:
  (*(code *)*puVar4)(plVar2,puVar4[1]);
  return lVar1;
}

