// rea decompile_all
// name: MessagePack.Internal.StandardResolverHelper$$.cctor
// address: 0x73d76d0
// body: available
// range: 0x73d76d0-0x73d7d53 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x73d7d3c to 0x3f5c248 thunk_FUN_03f5d7b8 (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x73d7d40 to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x73d7d4c to 0x3f5c414 FUN_03f5c414 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x73d7d50 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void MessagePack_Internal_StandardResolverHelper___cctor(void)

{
  long *plVar1;
  long lVar2;
  long *plVar3;
  undefined8 uVar4;
  long lVar5;
  
  if ((DAT_09520cf0 & 1) == 0) {
    FUN_03f5c2a4(&DAT_09181838);
    FUN_03f5c2a4(&DAT_09182098);
    FUN_03f5c2a4(&DAT_091828a8);
    FUN_03f5c2a4(&DAT_09183e08);
    FUN_03f5c2a4(&DAT_09183e58);
    FUN_03f5c2a4(&DAT_09183eb0);
    FUN_03f5c2a4(&DAT_09184388);
    FUN_03f5c2a4(&DAT_091800b0);
    FUN_03f5c2a4(&DAT_091800b8);
    FUN_03f5c2a4(&DAT_09186af0);
    FUN_03f5c2a4(&DAT_0918aeb0);
    FUN_03f5c2a4(&DAT_0918b1a0);
    DAT_09520cf0 = 1;
  }
  if (*(int *)(DAT_09183e08 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  if (**(char **)(DAT_09183e08 + 0xb8) == '\0') {
    plVar1 = (long *)FUN_03f5c394(DAT_091800b0,7);
    if (*(int *)(DAT_09182098 + 0xe4) == 0) {
      FUN_03f5c424(DAT_09182098);
    }
    if (plVar1 != (long *)0x0) {
      lVar5 = **(long **)(DAT_09182098 + 0xb8);
      if ((lVar5 == 0) ||
         (lVar2 = thunk_FUN_03f99350(lVar5,*(undefined8 *)(*plVar1 + 0x40)), lVar2 != 0)) {
        if ((int)plVar1[3] != 0) {
          plVar1[4] = lVar5;
          thunk_FUN_03f5d7b8(plVar1 + 4,lVar5);
          if (*(int *)(DAT_09181838 + 0xe4) == 0) {
            FUN_03f5c424();
          }
          lVar5 = **(long **)(DAT_09181838 + 0xb8);
          if ((lVar5 != 0) &&
             (lVar2 = thunk_FUN_03f99350(lVar5,*(undefined8 *)(*plVar1 + 0x40)), lVar2 == 0))
          goto LAB_073d7d44;
          if ((*(uint *)(plVar1 + 3) & 0xfffffffe) != 0) {
            plVar1[5] = lVar5;
            thunk_FUN_03f5d7b8(plVar1 + 5,lVar5);
            if (*(int *)(DAT_0918aeb0 + 0xe4) == 0) {
              FUN_03f5c424();
            }
            lVar5 = **(long **)(DAT_0918aeb0 + 0xb8);
            if ((lVar5 != 0) &&
               (lVar2 = thunk_FUN_03f99350(lVar5,*(undefined8 *)(*plVar1 + 0x40)), lVar2 == 0))
            goto LAB_073d7d44;
            if (2 < *(uint *)(plVar1 + 3)) {
              plVar1[6] = lVar5;
              thunk_FUN_03f5d7b8(plVar1 + 6,lVar5);
              if (*(int *)(DAT_09186af0 + 0xe4) == 0) {
                FUN_03f5c424();
              }
              lVar5 = **(long **)(DAT_09186af0 + 0xb8);
              if ((lVar5 != 0) &&
                 (lVar2 = thunk_FUN_03f99350(lVar5,*(undefined8 *)(*plVar1 + 0x40)), lVar2 == 0))
              goto LAB_073d7d44;
              if ((*(uint *)(plVar1 + 3) & 0xfffffffc) != 0) {
                plVar1[7] = lVar5;
                thunk_FUN_03f5d7b8(plVar1 + 7,lVar5);
                plVar3 = (long *)FUN_03f5c394(DAT_091800b8,1);
                if (*(int *)(DAT_09184388 + 0xe4) == 0) {
                  FUN_03f5c424(DAT_09184388);
                }
                if (plVar3 == (long *)0x0) goto LAB_073d7d50;
                lVar5 = **(long **)(DAT_09184388 + 0xb8);
                if ((lVar5 != 0) &&
                   (lVar2 = thunk_FUN_03f99350(lVar5,*(undefined8 *)(*plVar3 + 0x40)), lVar2 == 0))
                goto LAB_073d7d44;
                if ((int)plVar3[3] != 0) {
                  plVar3[4] = lVar5;
                  thunk_FUN_03f5d7b8(plVar3 + 4,lVar5);
                  if (*(int *)(DAT_091828a8 + 0xe4) == 0) {
                    FUN_03f5c424();
                  }
                  lVar5 = MessagePack_Resolvers_CompositeResolver__Create(plVar3,0);
                  if ((lVar5 != 0) &&
                     (lVar2 = thunk_FUN_03f99350(lVar5,*(undefined8 *)(*plVar1 + 0x40)), lVar2 == 0)
                     ) goto LAB_073d7d44;
                  if (4 < *(uint *)(plVar1 + 3)) {
                    plVar1[8] = lVar5;
                    thunk_FUN_03f5d7b8(plVar1 + 8,lVar5);
                    if (*(int *)(DAT_09183e58 + 0xe4) == 0) {
                      FUN_03f5c424();
                    }
                    lVar5 = **(long **)(DAT_09183e58 + 0xb8);
                    if ((lVar5 != 0) &&
                       (lVar2 = thunk_FUN_03f99350(lVar5,*(undefined8 *)(*plVar1 + 0x40)),
                       lVar2 == 0)) goto LAB_073d7d44;
                    if (5 < *(uint *)(plVar1 + 3)) {
                      plVar1[9] = lVar5;
                      thunk_FUN_03f5d7b8(plVar1 + 9,lVar5);
                      if (*(int *)(DAT_09183eb0 + 0xe4) == 0) {
                        FUN_03f5c424();
                      }
                      lVar5 = **(long **)(DAT_09183eb0 + 0xb8);
                      if ((lVar5 != 0) &&
                         (lVar2 = thunk_FUN_03f99350(lVar5,*(undefined8 *)(*plVar1 + 0x40)),
                         lVar2 == 0)) goto LAB_073d7d44;
                      if (6 < *(uint *)(plVar1 + 3)) {
                        plVar3 = plVar1 + 10;
                        *plVar3 = lVar5;
                        goto LAB_073d7cfc;
                      }
                    }
                  }
                }
              }
            }
          }
        }
        goto LAB_073d7d40;
      }
      goto LAB_073d7d44;
    }
  }
  else {
    plVar1 = (long *)FUN_03f5c394(DAT_091800b0,6);
    if (*(int *)(DAT_09182098 + 0xe4) == 0) {
      FUN_03f5c424(DAT_09182098);
    }
    if (plVar1 != (long *)0x0) {
      lVar5 = **(long **)(DAT_09182098 + 0xb8);
      if ((lVar5 != 0) &&
         (lVar2 = thunk_FUN_03f99350(lVar5,*(undefined8 *)(*plVar1 + 0x40)), lVar2 == 0)) {
LAB_073d7d44:
        uVar4 = thunk_FUN_03fa6ef4();
                    /* WARNING: Subroutine does not return */
        FUN_03f5c414(uVar4,0);
      }
      if ((int)plVar1[3] != 0) {
        plVar1[4] = lVar5;
        thunk_FUN_03f5d7b8(plVar1 + 4,lVar5);
        if (*(int *)(DAT_09181838 + 0xe4) == 0) {
          FUN_03f5c424();
        }
        lVar5 = **(long **)(DAT_09181838 + 0xb8);
        if ((lVar5 != 0) &&
           (lVar2 = thunk_FUN_03f99350(lVar5,*(undefined8 *)(*plVar1 + 0x40)), lVar2 == 0))
        goto LAB_073d7d44;
        if ((*(uint *)(plVar1 + 3) & 0xfffffffe) != 0) {
          plVar1[5] = lVar5;
          thunk_FUN_03f5d7b8(plVar1 + 5,lVar5);
          if (*(int *)(DAT_0918aeb0 + 0xe4) == 0) {
            FUN_03f5c424();
          }
          lVar5 = **(long **)(DAT_0918aeb0 + 0xb8);
          if ((lVar5 != 0) &&
             (lVar2 = thunk_FUN_03f99350(lVar5,*(undefined8 *)(*plVar1 + 0x40)), lVar2 == 0))
          goto LAB_073d7d44;
          if (2 < *(uint *)(plVar1 + 3)) {
            plVar1[6] = lVar5;
            thunk_FUN_03f5d7b8(plVar1 + 6,lVar5);
            if (*(int *)(DAT_09186af0 + 0xe4) == 0) {
              FUN_03f5c424();
            }
            lVar5 = **(long **)(DAT_09186af0 + 0xb8);
            if ((lVar5 != 0) &&
               (lVar2 = thunk_FUN_03f99350(lVar5,*(undefined8 *)(*plVar1 + 0x40)), lVar2 == 0))
            goto LAB_073d7d44;
            if ((*(uint *)(plVar1 + 3) & 0xfffffffc) != 0) {
              plVar1[7] = lVar5;
              thunk_FUN_03f5d7b8(plVar1 + 7,lVar5);
              plVar3 = (long *)FUN_03f5c394(DAT_091800b8,1);
              if (*(int *)(DAT_09184388 + 0xe4) == 0) {
                FUN_03f5c424(DAT_09184388);
              }
              if (plVar3 == (long *)0x0) goto LAB_073d7d50;
              lVar5 = **(long **)(DAT_09184388 + 0xb8);
              if ((lVar5 != 0) &&
                 (lVar2 = thunk_FUN_03f99350(lVar5,*(undefined8 *)(*plVar3 + 0x40)), lVar2 == 0))
              goto LAB_073d7d44;
              if ((int)plVar3[3] != 0) {
                plVar3[4] = lVar5;
                thunk_FUN_03f5d7b8(plVar3 + 4,lVar5);
                if (*(int *)(DAT_091828a8 + 0xe4) == 0) {
                  FUN_03f5c424();
                }
                lVar5 = MessagePack_Resolvers_CompositeResolver__Create(plVar3,0);
                if ((lVar5 != 0) &&
                   (lVar2 = thunk_FUN_03f99350(lVar5,*(undefined8 *)(*plVar1 + 0x40)), lVar2 == 0))
                goto LAB_073d7d44;
                if (4 < *(uint *)(plVar1 + 3)) {
                  plVar1[8] = lVar5;
                  thunk_FUN_03f5d7b8(plVar1 + 8,lVar5);
                  if (*(int *)(DAT_09183e58 + 0xe4) == 0) {
                    FUN_03f5c424();
                  }
                  lVar5 = **(long **)(DAT_09183e58 + 0xb8);
                  if ((lVar5 != 0) &&
                     (lVar2 = thunk_FUN_03f99350(lVar5,*(undefined8 *)(*plVar1 + 0x40)), lVar2 == 0)
                     ) goto LAB_073d7d44;
                  if (5 < *(uint *)(plVar1 + 3)) {
                    plVar3 = plVar1 + 9;
                    *plVar3 = lVar5;
LAB_073d7cfc:
                    thunk_FUN_03f5d7b8(plVar3,lVar5);
                    **(long **)(DAT_0918b1a0 + 0xb8) = (long)plVar1;
                    thunk_FUN_03f5d7b8(*(undefined8 *)(DAT_0918b1a0 + 0xb8),plVar1);
                    return;
                  }
                }
              }
            }
          }
        }
      }
LAB_073d7d40:
                    /* WARNING: Subroutine does not return */
      FUN_03f5c558();
    }
  }
LAB_073d7d50:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

