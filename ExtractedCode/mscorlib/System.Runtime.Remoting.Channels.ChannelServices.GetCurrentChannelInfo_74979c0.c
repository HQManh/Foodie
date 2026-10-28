// rea decompile_all
// name: System.Runtime.Remoting.Channels.ChannelServices$$GetCurrentChannelInfo
// address: 0x74979c0
// body: available
// range: 0x74979c0-0x7497de3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x7497cc8 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x7497dc8 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x7497dcc to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x7497dd0 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x7497dd4 to 0x3f5c548 FUN_03f5c548 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x7497dd8 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x7497de0 to 0x3f5c548 FUN_03f5c548 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x07497d60) */
/* WARNING: Removing unreachable block (ram,0x07497ddc) */
/* WARNING: Removing unreachable block (ram,0x07497dd4) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void System_Runtime_Remoting_Channels_ChannelServices__GetCurrentChannelInfo(void)

{
  uint uVar1;
  long lVar2;
  long *plVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  long *plVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  ulong uVar11;
  int *piVar12;
  char local_44 [4];
  
  if ((DAT_09521335 & 1) == 0) {
    FUN_03f5c2a4(&DAT_09182498);
    FUN_03f5c2a4(&DAT_09185770);
    FUN_03f5c2a4(&DAT_09185a58);
    FUN_03f5c2a4(&DAT_09185b10);
    FUN_03f5c2a4(&DAT_091aeac8);
    FUN_03f5c2a4(&DAT_091aeb00);
    FUN_03f5c2a4(&DAT_091aeab0);
    FUN_03f5c2a4(&DAT_0917c7e0);
    DAT_09521335 = 1;
  }
  local_44[0] = '\0';
  lVar2 = thunk_FUN_03f9944c(DAT_0917c7e0);
  FUN_057e0400(lVar2,DAT_091aeab0);
  if (*(int *)(DAT_09182498 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  plVar3 = (long *)**(long **)(DAT_09182498 + 0xb8);
  if (plVar3 != (long *)0x0) {
    uVar4 = (**(code **)(*plVar3 + 0x2d8))(plVar3,*(undefined8 *)(*plVar3 + 0x2e0));
    local_44[0] = '\0';
    System_Threading_Monitor__Enter(uVar4,local_44,0);
    if (*(int *)(DAT_09182498 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    plVar3 = (long *)**(long **)(DAT_09182498 + 0xb8);
    if (plVar3 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    plVar3 = (long *)(**(code **)(*plVar3 + 0x388))(plVar3,*(undefined8 *)(*plVar3 + 0x390));
joined_r0x07497b1c:
    do {
      do {
        if (plVar3 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_03f5c550();
        }
        lVar9 = *plVar3;
        uVar11 = (ulong)*(ushort *)(lVar9 + 0x12e);
        if (uVar11 != 0) {
          piVar12 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
          do {
            if (*(long *)(piVar12 + -2) == DAT_09185b10) {
              puVar5 = (undefined8 *)(lVar9 + (long)*piVar12 * 0x10 + 0x138);
              goto LAB_07497b84;
            }
            uVar11 = uVar11 - 1;
            piVar12 = piVar12 + 4;
          } while (uVar11 != 0);
        }
        puVar5 = (undefined8 *)FUN_03f95da8(plVar3,DAT_09185b10,0);
LAB_07497b84:
        uVar11 = (*(code *)*puVar5)(plVar3,puVar5[1]);
        if ((uVar11 & 1) == 0) {
          plVar3 = (long *)thunk_FUN_03f99350(plVar3,DAT_09185a58);
          if (plVar3 == (long *)0x0) goto LAB_07497d58;
          lVar9 = *plVar3;
          uVar11 = (ulong)*(ushort *)(lVar9 + 0x12e);
          if (uVar11 == 0) goto LAB_07497d30;
          piVar12 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
          goto LAB_07497d18;
        }
        if (plVar3 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_03f5c550();
        }
        lVar9 = *plVar3;
        uVar11 = (ulong)*(ushort *)(lVar9 + 0x12e);
        if (uVar11 != 0) {
          piVar12 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
          do {
            if (*(long *)(piVar12 + -2) == DAT_09185b10) {
              puVar5 = (undefined8 *)(lVar9 + (long)(*piVar12 + 1) * 0x10 + 0x138);
              goto LAB_07497bec;
            }
            uVar11 = uVar11 - 1;
            piVar12 = piVar12 + 4;
          } while (uVar11 != 0);
        }
        puVar5 = (undefined8 *)FUN_03f95da8(plVar3,DAT_09185b10,1);
LAB_07497bec:
        uVar6 = (*(code *)*puVar5)(plVar3,puVar5[1]);
        plVar7 = (long *)thunk_FUN_03f99350(uVar6,DAT_09185770);
      } while (plVar7 == (long *)0x0);
      lVar9 = *plVar7;
      uVar11 = (ulong)*(ushort *)(lVar9 + 0x12e);
      if (uVar11 != 0) {
        piVar12 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
        do {
          if (*(long *)(piVar12 + -2) == DAT_09185770) {
            puVar5 = (undefined8 *)(lVar9 + (long)*piVar12 * 0x10 + 0x138);
            goto LAB_07497c54;
          }
          uVar11 = uVar11 - 1;
          piVar12 = piVar12 + 4;
        } while (uVar11 != 0);
      }
      puVar5 = (undefined8 *)FUN_03f95da8(plVar7,DAT_09185770,0);
LAB_07497c54:
      lVar8 = (*(code *)*puVar5)(plVar7,puVar5[1]);
      lVar9 = DAT_091aeac8;
    } while (lVar8 == 0);
    if (lVar2 != 0) {
      lVar10 = *(long *)(lVar2 + 0x10);
      *(int *)(lVar2 + 0x1c) = *(int *)(lVar2 + 0x1c) + 1;
      if (lVar10 != 0) {
        uVar1 = *(uint *)(lVar2 + 0x18);
        if (uVar1 < *(uint *)(lVar10 + 0x18)) {
          *(uint *)(lVar2 + 0x18) = uVar1 + 1;
          *(long *)(lVar10 + (long)(int)uVar1 * 8 + 0x20) = lVar8;
          thunk_FUN_03f5d7b8();
        }
        else {
          FUN_057e0c68(lVar2,lVar8,*(undefined8 *)(*(long *)(*(long *)(lVar9 + 0x20) + 0xc0) + 0x70)
                      );
        }
        goto joined_r0x07497b1c;
      }
    }
                    /* WARNING: Subroutine does not return */
    FUN_03f5c550();
  }
  goto LAB_07497dd0;
  while( true ) {
    uVar11 = uVar11 - 1;
    piVar12 = piVar12 + 4;
    if (uVar11 == 0) break;
LAB_07497d18:
    if (*(long *)(piVar12 + -2) == DAT_09185a58) {
      puVar5 = (undefined8 *)(lVar9 + (long)*piVar12 * 0x10 + 0x138);
      goto LAB_07497d4c;
    }
  }
LAB_07497d30:
  puVar5 = (undefined8 *)FUN_03f95da8(plVar3,DAT_09185a58,0);
LAB_07497d4c:
  (*(code *)*puVar5)(plVar3,puVar5[1]);
LAB_07497d58:
  if (local_44[0] != '\0') {
    System_Threading_Monitor__Exit(uVar4,0);
  }
  if (lVar2 != 0) {
    FUN_057e28a4(lVar2,DAT_091aeb00);
    return;
  }
LAB_07497dd0:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

