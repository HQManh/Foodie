// rea decompile_all
// name: MessagePack.MessagePackPrimitives.Decoders$$.cctor
// address: 0x7388904
// body: available
// range: 0x7388904-0x7389007 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x7389004 to 0x89db618 FUN_089db618 (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void MessagePack_MessagePackPrimitives_Decoders___cctor(void)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  undefined8 *puVar4;
  long lVar5;
  long *plVar6;
  ulong uVar7;
  undefined1 local_70 [16];
  
  if ((DAT_09520a58 & 1) == 0) {
    FUN_03f5c2a4(&DAT_091ecf28);
    FUN_03f5c2a4(&DAT_09192888);
    FUN_03f5c2a4(&DAT_09180d68);
    FUN_03f5c2a4(&DAT_09180d70);
    FUN_03f5c2a4(&DAT_091d2ee0);
    FUN_03f5c2a4(&DAT_091d2ee8);
    FUN_03f5c2a4(&DAT_09196900);
    FUN_03f5c2a4(&DAT_09196908);
    FUN_03f5c2a4(&DAT_09196910);
    FUN_03f5c2a4(&DAT_09196918);
    FUN_03f5c2a4(&DAT_09196920);
    FUN_03f5c2a4(&DAT_09196928);
    FUN_03f5c2a4(&DAT_09196930);
    FUN_03f5c2a4(&DAT_09196938);
    FUN_03f5c2a4(&DAT_09196940);
    FUN_03f5c2a4(&DAT_09196948);
    FUN_03f5c2a4(&DAT_09196950);
    FUN_03f5c2a4(&DAT_09196958);
    FUN_03f5c2a4(&DAT_09196960);
    FUN_03f5c2a4(&DAT_09196968);
    FUN_03f5c2a4(&DAT_09196970);
    FUN_03f5c2a4(&DAT_09196978);
    FUN_03f5c2a4(&DAT_09196980);
    FUN_03f5c2a4(&DAT_09196988);
    FUN_03f5c2a4(&DAT_09196990);
    FUN_03f5c2a4(&DAT_09196998);
    FUN_03f5c2a4(&DAT_091969a0);
    FUN_03f5c2a4(&DAT_091969a8);
    FUN_03f5c2a4(&DAT_091badf8);
    FUN_03f5c2a4(&DAT_091badf0);
    DAT_09520a58 = 1;
  }
  local_70._8_8_ = 0;
  local_70._0_8_ = 0;
  uVar1 = FUN_03f5c394(DAT_09180d68,0x100);
  **(undefined8 **)(DAT_09192888 + 0xb8) = uVar1;
  thunk_FUN_03f5d7b8(*(undefined8 *)(DAT_09192888 + 0xb8),uVar1);
  local_70 = FUN_0739cf44(**(undefined8 **)(DAT_09192888 + 0xb8),DAT_091d2ee0);
  if (*(int *)(DAT_09196928 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  FUN_0612c078(local_70,**(undefined8 **)(DAT_09196928 + 0xb8),DAT_091badf0);
  plVar6 = (long *)**(undefined8 **)(DAT_09192888 + 0xb8);
  if (*(int *)(DAT_09196950 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  if (plVar6 != (long *)0x0) {
    lVar5 = **(long **)(DAT_09196950 + 0xb8);
    if ((lVar5 != 0) &&
       (lVar2 = thunk_FUN_03f99350(lVar5,*(undefined8 *)(*plVar6 + 0x40)), lVar2 == 0)) {
LAB_0738946c:
      uVar1 = thunk_FUN_03fa6ef4();
                    /* WARNING: Subroutine does not return */
      FUN_03f5c414(uVar1,0);
    }
    if (*(uint *)(plVar6 + 3) < 0xcd) {
LAB_07389468:
                    /* WARNING: Subroutine does not return */
      FUN_03f5c558();
    }
    plVar6[0xd0] = lVar5;
    thunk_FUN_03f5d7b8(plVar6 + 0xd0,lVar5);
    plVar6 = (long *)**(undefined8 **)(DAT_09192888 + 0xb8);
    if (*(int *)(DAT_09196938 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    if (plVar6 != (long *)0x0) {
      lVar5 = **(long **)(DAT_09196938 + 0xb8);
      if ((lVar5 != 0) &&
         (lVar2 = thunk_FUN_03f99350(lVar5,*(undefined8 *)(*plVar6 + 0x40)), lVar2 == 0))
      goto LAB_0738946c;
      if (*(uint *)(plVar6 + 3) < 0xce) goto LAB_07389468;
      plVar6[0xd1] = lVar5;
      thunk_FUN_03f5d7b8(plVar6 + 0xd1,lVar5);
      plVar6 = (long *)**(undefined8 **)(DAT_09192888 + 0xb8);
      if (*(int *)(DAT_09196940 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      if (plVar6 != (long *)0x0) {
        lVar5 = **(long **)(DAT_09196940 + 0xb8);
        if ((lVar5 != 0) &&
           (lVar2 = thunk_FUN_03f99350(lVar5,*(undefined8 *)(*plVar6 + 0x40)), lVar2 == 0))
        goto LAB_0738946c;
        if (*(uint *)(plVar6 + 3) < 0xcf) goto LAB_07389468;
        plVar6[0xd2] = lVar5;
        thunk_FUN_03f5d7b8(plVar6 + 0xd2,lVar5);
        plVar6 = (long *)**(undefined8 **)(DAT_09192888 + 0xb8);
        if (*(int *)(DAT_09196948 + 0xe4) == 0) {
          FUN_03f5c424();
        }
        if (plVar6 != (long *)0x0) {
          lVar5 = **(long **)(DAT_09196948 + 0xb8);
          if ((lVar5 != 0) &&
             (lVar2 = thunk_FUN_03f99350(lVar5,*(undefined8 *)(*plVar6 + 0x40)), lVar2 == 0))
          goto LAB_0738946c;
          if (*(uint *)(plVar6 + 3) < 0xd0) goto LAB_07389468;
          plVar6[0xd3] = lVar5;
          thunk_FUN_03f5d7b8(plVar6 + 0xd3,lVar5);
          plVar6 = (long *)**(undefined8 **)(DAT_09192888 + 0xb8);
          if (*(int *)(DAT_09196920 + 0xe4) == 0) {
            FUN_03f5c424();
          }
          if (plVar6 != (long *)0x0) {
            lVar5 = **(long **)(DAT_09196920 + 0xb8);
            if ((lVar5 != 0) &&
               (lVar2 = thunk_FUN_03f99350(lVar5,*(undefined8 *)(*plVar6 + 0x40)), lVar2 == 0))
            goto LAB_0738946c;
            if (*(uint *)(plVar6 + 3) < 0xd1) goto LAB_07389468;
            plVar6[0xd4] = lVar5;
            thunk_FUN_03f5d7b8(plVar6 + 0xd4,lVar5);
            plVar6 = (long *)**(undefined8 **)(DAT_09192888 + 0xb8);
            if (*(int *)(DAT_09196908 + 0xe4) == 0) {
              FUN_03f5c424();
            }
            if (plVar6 != (long *)0x0) {
              lVar5 = **(long **)(DAT_09196908 + 0xb8);
              if ((lVar5 != 0) &&
                 (lVar2 = thunk_FUN_03f99350(lVar5,*(undefined8 *)(*plVar6 + 0x40)), lVar2 == 0))
              goto LAB_0738946c;
              if (*(uint *)(plVar6 + 3) < 0xd2) goto LAB_07389468;
              plVar6[0xd5] = lVar5;
              thunk_FUN_03f5d7b8(plVar6 + 0xd5,lVar5);
              plVar6 = (long *)**(undefined8 **)(DAT_09192888 + 0xb8);
              if (*(int *)(DAT_09196910 + 0xe4) == 0) {
                FUN_03f5c424();
              }
              if (plVar6 != (long *)0x0) {
                lVar5 = **(long **)(DAT_09196910 + 0xb8);
                if ((lVar5 != 0) &&
                   (lVar2 = thunk_FUN_03f99350(lVar5,*(undefined8 *)(*plVar6 + 0x40)), lVar2 == 0))
                goto LAB_0738946c;
                if (*(uint *)(plVar6 + 3) < 0xd3) goto LAB_07389468;
                plVar6[0xd6] = lVar5;
                thunk_FUN_03f5d7b8(plVar6 + 0xd6,lVar5);
                plVar6 = (long *)**(undefined8 **)(DAT_09192888 + 0xb8);
                if (*(int *)(DAT_09196918 + 0xe4) == 0) {
                  FUN_03f5c424();
                }
                if (plVar6 != (long *)0x0) {
                  lVar5 = **(long **)(DAT_09196918 + 0xb8);
                  if ((lVar5 != 0) &&
                     (lVar2 = thunk_FUN_03f99350(lVar5,*(undefined8 *)(*plVar6 + 0x40)), lVar2 == 0)
                     ) goto LAB_0738946c;
                  if (*(uint *)(plVar6 + 3) < 0xd4) goto LAB_07389468;
                  plVar6[0xd7] = lVar5;
                  thunk_FUN_03f5d7b8(plVar6 + 0xd7,lVar5);
                  uVar7 = 0xe0;
                  lVar5 = 0x720;
                  do {
                    plVar6 = (long *)**(undefined8 **)(DAT_09192888 + 0xb8);
                    if (*(int *)(DAT_09196930 + 0xe4) == 0) {
                      FUN_03f5c424();
                    }
                    if (plVar6 == (long *)0x0) goto LAB_07389464;
                    lVar2 = **(long **)(DAT_09196930 + 0xb8);
                    if ((lVar2 != 0) &&
                       (lVar3 = thunk_FUN_03f99350(lVar2,*(undefined8 *)(*plVar6 + 0x40)),
                       lVar3 == 0)) goto LAB_0738946c;
                    if (*(uint *)(plVar6 + 3) <= uVar7) goto LAB_07389468;
                    *(long *)((long)plVar6 + lVar5) = lVar2;
                    thunk_FUN_03f5d7b8((long)plVar6 + lVar5,lVar2);
                    uVar7 = uVar7 + 1;
                    lVar5 = lVar5 + 8;
                  } while (uVar7 != 0x100);
                  uVar7 = 0;
                  lVar5 = 0x20;
                  while( true ) {
                    plVar6 = (long *)**(undefined8 **)(DAT_09192888 + 0xb8);
                    if (*(int *)(DAT_09196900 + 0xe4) == 0) {
                      FUN_03f5c424();
                    }
                    if (plVar6 == (long *)0x0) break;
                    lVar2 = **(long **)(DAT_09196900 + 0xb8);
                    if ((lVar2 != 0) &&
                       (lVar3 = thunk_FUN_03f99350(lVar2,*(undefined8 *)(*plVar6 + 0x40)),
                       lVar3 == 0)) goto LAB_0738946c;
                    if (*(uint *)(plVar6 + 3) <= uVar7) goto LAB_07389468;
                    *(long *)((long)plVar6 + lVar5) = lVar2;
                    thunk_FUN_03f5d7b8((long)plVar6 + lVar5,lVar2);
                    uVar7 = uVar7 + 1;
                    lVar5 = lVar5 + 8;
                    if (uVar7 == 0x80) {
                      uVar1 = FUN_03f5c394(DAT_09180d70,0x100);
                      puVar4 = (undefined8 *)(*(long *)(DAT_09192888 + 0xb8) + 8);
                      *puVar4 = uVar1;
                      thunk_FUN_03f5d7b8(puVar4,uVar1);
                      FUN_0739cf44(*(undefined8 *)(*(long *)(DAT_09192888 + 0xb8) + 8),DAT_091d2ee8)
                      ;
                      if (*(int *)(DAT_09196980 + 0xe4) == 0) {
                        FUN_03f5c424();
                      }
                      FUN_089db618(DAT_09196980);
                      return;
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
LAB_07389464:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

