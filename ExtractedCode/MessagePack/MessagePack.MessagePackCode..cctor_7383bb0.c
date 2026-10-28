// rea decompile_all
// name: MessagePack.MessagePackCode$$.cctor
// address: 0x7383bb0
// body: available
// range: 0x7383bb0-0x7384b87 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x7384b80 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x7384b84 to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void MessagePack_MessagePackCode___cctor(void)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  
  if ((DAT_09520a25 & 1) == 0) {
    FUN_03f5c2a4(&DAT_091d3438);
    FUN_03f5c2a4(&DAT_09188148);
    FUN_03f5c2a4(&DAT_091802c8);
    FUN_03f5c2a4(&DAT_091805f8);
    FUN_03f5c2a4(&DAT_09218000);
    FUN_03f5c2a4(&DAT_0921d640);
    FUN_03f5c2a4(&DAT_0921b368);
    FUN_03f5c2a4(&DAT_0921fd38);
    FUN_03f5c2a4(&DAT_09224650);
    FUN_03f5c2a4(&DAT_0921b8b8);
    FUN_03f5c2a4(&DAT_0921d648);
    FUN_03f5c2a4(&DAT_0921d638);
    FUN_03f5c2a4(&DAT_0921d630);
    FUN_03f5c2a4(&DAT_09223598);
    FUN_03f5c2a4(&DAT_0921b7c0);
    FUN_03f5c2a4(&DAT_092235a8);
    FUN_03f5c2a4(&DAT_09224668);
    FUN_03f5c2a4(&DAT_09217ff8);
    FUN_03f5c2a4(&DAT_0921b360);
    FUN_03f5c2a4(&DAT_092179d8);
    FUN_03f5c2a4(&DAT_0921b558);
    FUN_03f5c2a4(&DAT_0921b7d8);
    FUN_03f5c2a4(&DAT_091f82e0);
    FUN_03f5c2a4(&DAT_0921b7f0);
    FUN_03f5c2a4(&DAT_0921b760);
    FUN_03f5c2a4(&DAT_0921b7c8);
    FUN_03f5c2a4(&DAT_0921fb60);
    FUN_03f5c2a4(&DAT_09220ed0);
    FUN_03f5c2a4(&DAT_0921b7e8);
    FUN_03f5c2a4(&DAT_09224438);
    FUN_03f5c2a4(&DAT_0921b7e0);
    FUN_03f5c2a4(&DAT_0921b7d0);
    FUN_03f5c2a4(&DAT_092179e0);
    FUN_03f5c2a4(&DAT_0921f0f8);
    FUN_03f5c2a4(&DAT_0921f100);
    FUN_03f5c2a4(&DAT_09224660);
    FUN_03f5c2a4(&DAT_09218008);
    FUN_03f5c2a4(&DAT_0921b358);
    FUN_03f5c2a4(&DAT_092235a0);
    FUN_03f5c2a4(&DAT_09224658);
    FUN_03f5c2a4(&DAT_0921b8c0);
    DAT_09520a25 = 1;
  }
  uVar1 = FUN_03f5c394(DAT_091802c8,0x100);
  **(undefined8 **)(DAT_09188148 + 0xb8) = uVar1;
  thunk_FUN_03f5d7b8(*(undefined8 *)(DAT_09188148 + 0xb8),uVar1);
  uVar1 = FUN_03f5c394(DAT_091805f8,0x100);
  puVar2 = (undefined8 *)(*(long *)(DAT_09188148 + 0xb8) + 8);
  *puVar2 = uVar1;
  thunk_FUN_03f5d7b8(puVar2,uVar1);
  uVar6 = 0;
  lVar5 = 0x20;
  do {
    lVar3 = **(long **)(DAT_09188148 + 0xb8);
    if (lVar3 == 0) goto LAB_07384b80;
    if (*(uint *)(lVar3 + 0x18) <= uVar6) goto LAB_07384b84;
    *(undefined1 *)(lVar3 + uVar6 + 0x20) = 1;
    lVar3 = *(long *)(*(long *)(DAT_09188148 + 0xb8) + 8);
    if (lVar3 == 0) goto LAB_07384b80;
    if (*(uint *)(lVar3 + 0x18) <= uVar6) goto LAB_07384b84;
    *(undefined8 *)(lVar3 + lVar5) = DAT_09220ed0;
    thunk_FUN_03f5d7b8(lVar3 + lVar5);
    uVar6 = uVar6 + 1;
    lVar5 = lVar5 + 8;
  } while (uVar6 != 0x80);
  lVar5 = 0xa0;
  lVar3 = 0x420;
  do {
    lVar4 = **(long **)(DAT_09188148 + 0xb8);
    if (lVar4 == 0) goto LAB_07384b80;
    if ((ulong)*(uint *)(lVar4 + 0x18) <= lVar5 - 0x20U) goto LAB_07384b84;
    *(undefined1 *)(lVar4 + lVar5) = 8;
    lVar4 = *(long *)(*(long *)(DAT_09188148 + 0xb8) + 8);
    if (lVar4 == 0) goto LAB_07384b80;
    if ((ulong)*(uint *)(lVar4 + 0x18) <= lVar5 - 0x20U) goto LAB_07384b84;
    *(undefined8 *)(lVar4 + lVar3) = DAT_0921b7e8;
    thunk_FUN_03f5d7b8(lVar4 + lVar3);
    lVar5 = lVar5 + 1;
    lVar3 = lVar3 + 8;
  } while (lVar5 != 0xb0);
  lVar3 = 0x4a0;
  lVar5 = 0xb0;
  do {
    lVar4 = **(long **)(DAT_09188148 + 0xb8);
    if (lVar4 == 0) goto LAB_07384b80;
    if ((ulong)*(uint *)(lVar4 + 0x18) <= lVar5 - 0x20U) goto LAB_07384b84;
    *(undefined1 *)(lVar4 + lVar5) = 7;
    lVar4 = *(long *)(*(long *)(DAT_09188148 + 0xb8) + 8);
    if (lVar4 == 0) goto LAB_07384b80;
    if ((ulong)*(uint *)(lVar4 + 0x18) <= lVar5 - 0x20U) goto LAB_07384b84;
    *(undefined8 *)(lVar4 + lVar3) = DAT_0921b760;
    thunk_FUN_03f5d7b8(lVar4 + lVar3);
    lVar5 = lVar5 + 1;
    lVar3 = lVar3 + 8;
  } while (lVar5 != 0xc0);
  lVar3 = 0x520;
  lVar5 = 0xc0;
  do {
    lVar4 = **(long **)(DAT_09188148 + 0xb8);
    if (lVar4 == 0) goto LAB_07384b80;
    if ((ulong)*(uint *)(lVar4 + 0x18) <= lVar5 - 0x20U) goto LAB_07384b84;
    *(undefined1 *)(lVar4 + lVar5) = 5;
    lVar4 = *(long *)(*(long *)(DAT_09188148 + 0xb8) + 8);
    if (lVar4 == 0) goto LAB_07384b80;
    if ((ulong)*(uint *)(lVar4 + 0x18) <= lVar5 - 0x20U) goto LAB_07384b84;
    *(undefined8 *)(lVar4 + lVar3) = DAT_0921b7f0;
    thunk_FUN_03f5d7b8(lVar4 + lVar3);
    lVar5 = lVar5 + 1;
    lVar3 = lVar3 + 8;
  } while (lVar5 != 0xe0);
  lVar5 = **(long **)(DAT_09188148 + 0xb8);
  if (lVar5 != 0) {
    if (*(uint *)(lVar5 + 0x18) < 0xc1) {
LAB_07384b84:
                    /* WARNING: Subroutine does not return */
      FUN_03f5c558();
    }
    *(undefined1 *)(lVar5 + 0xe0) = 2;
    lVar5 = **(long **)(DAT_09188148 + 0xb8);
    if (lVar5 != 0) {
      if (*(uint *)(lVar5 + 0x18) < 0xc2) goto LAB_07384b84;
      *(undefined1 *)(lVar5 + 0xe1) = 0;
      lVar5 = **(long **)(DAT_09188148 + 0xb8);
      if (lVar5 != 0) {
        if (*(uint *)(lVar5 + 0x18) < 0xc3) goto LAB_07384b84;
        *(undefined1 *)(lVar5 + 0xe2) = 3;
        lVar5 = **(long **)(DAT_09188148 + 0xb8);
        if (lVar5 != 0) {
          if (*(uint *)(lVar5 + 0x18) < 0xc4) goto LAB_07384b84;
          *(undefined1 *)(lVar5 + 0xe3) = 3;
          lVar5 = **(long **)(DAT_09188148 + 0xb8);
          if (lVar5 != 0) {
            if (*(uint *)(lVar5 + 0x18) < 0xc5) goto LAB_07384b84;
            *(undefined1 *)(lVar5 + 0xe4) = 6;
            lVar5 = **(long **)(DAT_09188148 + 0xb8);
            if (lVar5 != 0) {
              if (*(uint *)(lVar5 + 0x18) < 0xc6) goto LAB_07384b84;
              *(undefined1 *)(lVar5 + 0xe5) = 6;
              lVar5 = **(long **)(DAT_09188148 + 0xb8);
              if (lVar5 != 0) {
                if (*(uint *)(lVar5 + 0x18) < 199) goto LAB_07384b84;
                *(undefined1 *)(lVar5 + 0xe6) = 6;
                lVar5 = **(long **)(DAT_09188148 + 0xb8);
                if (lVar5 != 0) {
                  if (*(uint *)(lVar5 + 0x18) < 200) goto LAB_07384b84;
                  *(undefined1 *)(lVar5 + 0xe7) = 9;
                  lVar5 = **(long **)(DAT_09188148 + 0xb8);
                  if (lVar5 != 0) {
                    if (*(uint *)(lVar5 + 0x18) < 0xc9) goto LAB_07384b84;
                    *(undefined1 *)(lVar5 + 0xe8) = 9;
                    lVar5 = **(long **)(DAT_09188148 + 0xb8);
                    if (lVar5 != 0) {
                      if (*(uint *)(lVar5 + 0x18) < 0xca) goto LAB_07384b84;
                      *(undefined1 *)(lVar5 + 0xe9) = 9;
                      lVar5 = **(long **)(DAT_09188148 + 0xb8);
                      if (lVar5 != 0) {
                        if (*(uint *)(lVar5 + 0x18) < 0xcb) goto LAB_07384b84;
                        *(undefined1 *)(lVar5 + 0xea) = 4;
                        lVar5 = **(long **)(DAT_09188148 + 0xb8);
                        if (lVar5 != 0) {
                          if (*(uint *)(lVar5 + 0x18) < 0xcc) goto LAB_07384b84;
                          *(undefined1 *)(lVar5 + 0xeb) = 4;
                          lVar5 = **(long **)(DAT_09188148 + 0xb8);
                          if (lVar5 != 0) {
                            if (*(uint *)(lVar5 + 0x18) < 0xcd) goto LAB_07384b84;
                            *(undefined1 *)(lVar5 + 0xec) = 1;
                            lVar5 = **(long **)(DAT_09188148 + 0xb8);
                            if (lVar5 != 0) {
                              if (*(uint *)(lVar5 + 0x18) < 0xce) goto LAB_07384b84;
                              *(undefined1 *)(lVar5 + 0xed) = 1;
                              lVar5 = **(long **)(DAT_09188148 + 0xb8);
                              if (lVar5 != 0) {
                                if (*(uint *)(lVar5 + 0x18) < 0xcf) goto LAB_07384b84;
                                *(undefined1 *)(lVar5 + 0xee) = 1;
                                lVar5 = **(long **)(DAT_09188148 + 0xb8);
                                if (lVar5 != 0) {
                                  if (*(uint *)(lVar5 + 0x18) < 0xd0) goto LAB_07384b84;
                                  *(undefined1 *)(lVar5 + 0xef) = 1;
                                  lVar5 = **(long **)(DAT_09188148 + 0xb8);
                                  if (lVar5 != 0) {
                                    if (*(uint *)(lVar5 + 0x18) < 0xd1) goto LAB_07384b84;
                                    *(undefined1 *)(lVar5 + 0xf0) = 1;
                                    lVar5 = **(long **)(DAT_09188148 + 0xb8);
                                    if (lVar5 != 0) {
                                      if (*(uint *)(lVar5 + 0x18) < 0xd2) goto LAB_07384b84;
                                      *(undefined1 *)(lVar5 + 0xf1) = 1;
                                      lVar5 = **(long **)(DAT_09188148 + 0xb8);
                                      if (lVar5 != 0) {
                                        if (*(uint *)(lVar5 + 0x18) < 0xd3) goto LAB_07384b84;
                                        *(undefined1 *)(lVar5 + 0xf2) = 1;
                                        lVar5 = **(long **)(DAT_09188148 + 0xb8);
                                        if (lVar5 != 0) {
                                          if (*(uint *)(lVar5 + 0x18) < 0xd4) goto LAB_07384b84;
                                          *(undefined1 *)(lVar5 + 0xf3) = 1;
                                          lVar5 = **(long **)(DAT_09188148 + 0xb8);
                                          if (lVar5 != 0) {
                                            if (*(uint *)(lVar5 + 0x18) < 0xd5) goto LAB_07384b84;
                                            *(undefined1 *)(lVar5 + 0xf4) = 9;
                                            lVar5 = **(long **)(DAT_09188148 + 0xb8);
                                            if (lVar5 != 0) {
                                              if (*(uint *)(lVar5 + 0x18) < 0xd6) goto LAB_07384b84;
                                              *(undefined1 *)(lVar5 + 0xf5) = 9;
                                              lVar5 = **(long **)(DAT_09188148 + 0xb8);
                                              if (lVar5 != 0) {
                                                if (*(uint *)(lVar5 + 0x18) < 0xd7)
                                                goto LAB_07384b84;
                                                *(undefined1 *)(lVar5 + 0xf6) = 9;
                                                lVar5 = **(long **)(DAT_09188148 + 0xb8);
                                                if (lVar5 != 0) {
                                                  if (*(uint *)(lVar5 + 0x18) < 0xd8)
                                                  goto LAB_07384b84;
                                                  *(undefined1 *)(lVar5 + 0xf7) = 9;
                                                  lVar5 = **(long **)(DAT_09188148 + 0xb8);
                                                  if (lVar5 != 0) {
                                                    if (*(uint *)(lVar5 + 0x18) < 0xd9)
                                                    goto LAB_07384b84;
                                                    *(undefined1 *)(lVar5 + 0xf8) = 9;
                                                    lVar5 = **(long **)(DAT_09188148 + 0xb8);
                                                    if (lVar5 != 0) {
                                                      if (*(uint *)(lVar5 + 0x18) < 0xda)
                                                      goto LAB_07384b84;
                                                      *(undefined1 *)(lVar5 + 0xf9) = 5;
                                                      lVar5 = **(long **)(DAT_09188148 + 0xb8);
                                                      if (lVar5 != 0) {
                                                        if (*(uint *)(lVar5 + 0x18) < 0xdb)
                                                        goto LAB_07384b84;
                                                        *(undefined1 *)(lVar5 + 0xfa) = 5;
                                                        lVar5 = **(long **)(DAT_09188148 + 0xb8);
                                                        if (lVar5 != 0) {
                                                          if (*(uint *)(lVar5 + 0x18) < 0xdc)
                                                          goto LAB_07384b84;
                                                          *(undefined1 *)(lVar5 + 0xfb) = 5;
                                                          lVar5 = **(long **)(DAT_09188148 + 0xb8);
                                                          if (lVar5 != 0) {
                                                            if (*(uint *)(lVar5 + 0x18) < 0xdd)
                                                            goto LAB_07384b84;
                                                            *(undefined1 *)(lVar5 + 0xfc) = 7;
                                                            lVar5 = **(long **)(DAT_09188148 + 0xb8)
                                                            ;
                                                            if (lVar5 != 0) {
                                                              if (*(uint *)(lVar5 + 0x18) < 0xde)
                                                              goto LAB_07384b84;
                                                              *(undefined1 *)(lVar5 + 0xfd) = 7;
                                                              lVar5 = **(long **)(DAT_09188148 +
                                                                                 0xb8);
                                                              if (lVar5 != 0) {
                                                                if (*(uint *)(lVar5 + 0x18) < 0xdf)
                                                                goto LAB_07384b84;
                                                                *(undefined1 *)(lVar5 + 0xfe) = 8;
                                                                lVar5 = **(long **)(DAT_09188148 +
                                                                                   0xb8);
                                                                if (lVar5 != 0) {
                                                                  if (*(uint *)(lVar5 + 0x18) < 0xe0
                                                                     ) goto LAB_07384b84;
                                                                  *(undefined1 *)(lVar5 + 0xff) = 8;
                                                                  lVar5 = *(long *)(*(long *)(
                                                  DAT_09188148 + 0xb8) + 8);
                                                  if (lVar5 != 0) {
                                                    if (*(uint *)(lVar5 + 0x18) < 0xc1)
                                                    goto LAB_07384b84;
                                                    *(undefined8 *)(lVar5 + 0x620) = DAT_0921fd38;
                                                    thunk_FUN_03f5d7b8(lVar5 + 0x620);
                                                    lVar5 = *(long *)(*(long *)(DAT_09188148 + 0xb8)
                                                                     + 8);
                                                    if (lVar5 != 0) {
                                                      if (*(uint *)(lVar5 + 0x18) < 0xc2)
                                                      goto LAB_07384b84;
                                                      *(undefined8 *)(lVar5 + 0x628) = DAT_091f82e0;
                                                      thunk_FUN_03f5d7b8(lVar5 + 0x628);
                                                      lVar5 = *(long *)(*(long *)(DAT_09188148 +
                                                                                 0xb8) + 8);
                                                      if (lVar5 != 0) {
                                                        if (*(uint *)(lVar5 + 0x18) < 0xc3)
                                                        goto LAB_07384b84;
                                                        *(undefined8 *)(lVar5 + 0x630) =
                                                             DAT_0921b558;
                                                        thunk_FUN_03f5d7b8(lVar5 + 0x630);
                                                        lVar5 = *(long *)(*(long *)(DAT_09188148 +
                                                                                   0xb8) + 8);
                                                        if (lVar5 != 0) {
                                                          if (*(uint *)(lVar5 + 0x18) < 0xc4)
                                                          goto LAB_07384b84;
                                                          *(undefined8 *)(lVar5 + 0x638) =
                                                               DAT_09224438;
                                                          thunk_FUN_03f5d7b8(lVar5 + 0x638);
                                                          lVar5 = *(long *)(*(long *)(DAT_09188148 +
                                                                                     0xb8) + 8);
                                                          if (lVar5 != 0) {
                                                            if (*(uint *)(lVar5 + 0x18) < 0xc5)
                                                            goto LAB_07384b84;
                                                            *(undefined8 *)(lVar5 + 0x640) =
                                                                 DAT_09218008;
                                                            thunk_FUN_03f5d7b8(lVar5 + 0x640);
                                                            lVar5 = *(long *)(*(long *)(DAT_09188148
                                                                                       + 0xb8) + 8);
                                                            if (lVar5 != 0) {
                                                              if (*(uint *)(lVar5 + 0x18) < 0xc6)
                                                              goto LAB_07384b84;
                                                              *(undefined8 *)(lVar5 + 0x648) =
                                                                   DAT_09217ff8;
                                                              thunk_FUN_03f5d7b8(lVar5 + 0x648);
                                                              lVar5 = *(long *)(*(long *)(
                                                  DAT_09188148 + 0xb8) + 8);
                                                  if (lVar5 != 0) {
                                                    if (*(uint *)(lVar5 + 0x18) < 199)
                                                    goto LAB_07384b84;
                                                    *(undefined8 *)(lVar5 + 0x650) = DAT_09218000;
                                                    thunk_FUN_03f5d7b8(lVar5 + 0x650);
                                                    lVar5 = *(long *)(*(long *)(DAT_09188148 + 0xb8)
                                                                     + 8);
                                                    if (lVar5 != 0) {
                                                      if (*(uint *)(lVar5 + 0x18) < 200)
                                                      goto LAB_07384b84;
                                                      *(undefined8 *)(lVar5 + 0x658) = DAT_0921b368;
                                                      thunk_FUN_03f5d7b8(lVar5 + 0x658);
                                                      lVar5 = *(long *)(*(long *)(DAT_09188148 +
                                                                                 0xb8) + 8);
                                                      if (lVar5 != 0) {
                                                        if (*(uint *)(lVar5 + 0x18) < 0xc9)
                                                        goto LAB_07384b84;
                                                        *(undefined8 *)(lVar5 + 0x660) =
                                                             DAT_0921b358;
                                                        thunk_FUN_03f5d7b8(lVar5 + 0x660);
                                                        lVar5 = *(long *)(*(long *)(DAT_09188148 +
                                                                                   0xb8) + 8);
                                                        if (lVar5 != 0) {
                                                          if (*(uint *)(lVar5 + 0x18) < 0xca)
                                                          goto LAB_07384b84;
                                                          *(undefined8 *)(lVar5 + 0x668) =
                                                               DAT_0921b360;
                                                          thunk_FUN_03f5d7b8(lVar5 + 0x668);
                                                          lVar5 = *(long *)(*(long *)(DAT_09188148 +
                                                                                     0xb8) + 8);
                                                          if (lVar5 != 0) {
                                                            if (*(uint *)(lVar5 + 0x18) < 0xcb)
                                                            goto LAB_07384b84;
                                                            *(undefined8 *)(lVar5 + 0x670) =
                                                                 DAT_0921b8b8;
                                                            thunk_FUN_03f5d7b8(lVar5 + 0x670);
                                                            lVar5 = *(long *)(*(long *)(DAT_09188148
                                                                                       + 0xb8) + 8);
                                                            if (lVar5 != 0) {
                                                              if (*(uint *)(lVar5 + 0x18) < 0xcc)
                                                              goto LAB_07384b84;
                                                              *(undefined8 *)(lVar5 + 0x678) =
                                                                   DAT_0921b8c0;
                                                              thunk_FUN_03f5d7b8(lVar5 + 0x678);
                                                              lVar5 = *(long *)(*(long *)(
                                                  DAT_09188148 + 0xb8) + 8);
                                                  if (lVar5 != 0) {
                                                    if (*(uint *)(lVar5 + 0x18) < 0xcd)
                                                    goto LAB_07384b84;
                                                    *(undefined8 *)(lVar5 + 0x680) = DAT_09224668;
                                                    thunk_FUN_03f5d7b8(lVar5 + 0x680);
                                                    lVar5 = *(long *)(*(long *)(DAT_09188148 + 0xb8)
                                                                     + 8);
                                                    if (lVar5 != 0) {
                                                      if (*(uint *)(lVar5 + 0x18) < 0xce)
                                                      goto LAB_07384b84;
                                                      *(undefined8 *)(lVar5 + 0x688) = DAT_09224650;
                                                      thunk_FUN_03f5d7b8(lVar5 + 0x688);
                                                      lVar5 = *(long *)(*(long *)(DAT_09188148 +
                                                                                 0xb8) + 8);
                                                      if (lVar5 != 0) {
                                                        if (*(uint *)(lVar5 + 0x18) < 0xcf)
                                                        goto LAB_07384b84;
                                                        *(undefined8 *)(lVar5 + 0x690) =
                                                             DAT_09224658;
                                                        thunk_FUN_03f5d7b8(lVar5 + 0x690);
                                                        lVar5 = *(long *)(*(long *)(DAT_09188148 +
                                                                                   0xb8) + 8);
                                                        if (lVar5 != 0) {
                                                          if (*(uint *)(lVar5 + 0x18) < 0xd0)
                                                          goto LAB_07384b84;
                                                          *(undefined8 *)(lVar5 + 0x698) =
                                                               DAT_09224660;
                                                          thunk_FUN_03f5d7b8(lVar5 + 0x698);
                                                          lVar5 = *(long *)(*(long *)(DAT_09188148 +
                                                                                     0xb8) + 8);
                                                          if (lVar5 != 0) {
                                                            if (*(uint *)(lVar5 + 0x18) < 0xd1)
                                                            goto LAB_07384b84;
                                                            *(undefined8 *)(lVar5 + 0x6a0) =
                                                                 DAT_0921d648;
                                                            thunk_FUN_03f5d7b8(lVar5 + 0x6a0);
                                                            lVar5 = *(long *)(*(long *)(DAT_09188148
                                                                                       + 0xb8) + 8);
                                                            if (lVar5 != 0) {
                                                              if (*(uint *)(lVar5 + 0x18) < 0xd2)
                                                              goto LAB_07384b84;
                                                              *(undefined8 *)(lVar5 + 0x6a8) =
                                                                   DAT_0921d630;
                                                              thunk_FUN_03f5d7b8(lVar5 + 0x6a8);
                                                              lVar5 = *(long *)(*(long *)(
                                                  DAT_09188148 + 0xb8) + 8);
                                                  if (lVar5 != 0) {
                                                    if (*(uint *)(lVar5 + 0x18) < 0xd3)
                                                    goto LAB_07384b84;
                                                    *(undefined8 *)(lVar5 + 0x6b0) = DAT_0921d638;
                                                    thunk_FUN_03f5d7b8(lVar5 + 0x6b0);
                                                    lVar5 = *(long *)(*(long *)(DAT_09188148 + 0xb8)
                                                                     + 8);
                                                    if (lVar5 != 0) {
                                                      if (*(uint *)(lVar5 + 0x18) < 0xd4)
                                                      goto LAB_07384b84;
                                                      *(undefined8 *)(lVar5 + 0x6b8) = DAT_0921d640;
                                                      thunk_FUN_03f5d7b8(lVar5 + 0x6b8);
                                                      lVar5 = *(long *)(*(long *)(DAT_09188148 +
                                                                                 0xb8) + 8);
                                                      if (lVar5 != 0) {
                                                        if (*(uint *)(lVar5 + 0x18) < 0xd5)
                                                        goto LAB_07384b84;
                                                        *(undefined8 *)(lVar5 + 0x6c0) =
                                                             DAT_0921b7c0;
                                                        thunk_FUN_03f5d7b8(lVar5 + 0x6c0);
                                                        lVar5 = *(long *)(*(long *)(DAT_09188148 +
                                                                                   0xb8) + 8);
                                                        if (lVar5 != 0) {
                                                          if (*(uint *)(lVar5 + 0x18) < 0xd6)
                                                          goto LAB_07384b84;
                                                          *(undefined8 *)(lVar5 + 0x6c8) =
                                                               DAT_0921b7d0;
                                                          thunk_FUN_03f5d7b8(lVar5 + 0x6c8);
                                                          lVar5 = *(long *)(*(long *)(DAT_09188148 +
                                                                                     0xb8) + 8);
                                                          if (lVar5 != 0) {
                                                            if (*(uint *)(lVar5 + 0x18) < 0xd7)
                                                            goto LAB_07384b84;
                                                            *(undefined8 *)(lVar5 + 0x6d0) =
                                                                 DAT_0921b7d8;
                                                            thunk_FUN_03f5d7b8(lVar5 + 0x6d0);
                                                            lVar5 = *(long *)(*(long *)(DAT_09188148
                                                                                       + 0xb8) + 8);
                                                            if (lVar5 != 0) {
                                                              if (*(uint *)(lVar5 + 0x18) < 0xd8)
                                                              goto LAB_07384b84;
                                                              *(undefined8 *)(lVar5 + 0x6d8) =
                                                                   DAT_0921b7e0;
                                                              thunk_FUN_03f5d7b8(lVar5 + 0x6d8);
                                                              lVar5 = *(long *)(*(long *)(
                                                  DAT_09188148 + 0xb8) + 8);
                                                  if (lVar5 != 0) {
                                                    if (*(uint *)(lVar5 + 0x18) < 0xd9)
                                                    goto LAB_07384b84;
                                                    *(undefined8 *)(lVar5 + 0x6e0) = DAT_0921b7c8;
                                                    thunk_FUN_03f5d7b8(lVar5 + 0x6e0);
                                                    lVar5 = *(long *)(*(long *)(DAT_09188148 + 0xb8)
                                                                     + 8);
                                                    if (lVar5 != 0) {
                                                      if (*(uint *)(lVar5 + 0x18) < 0xda)
                                                      goto LAB_07384b84;
                                                      *(undefined8 *)(lVar5 + 0x6e8) = DAT_092235a8;
                                                      thunk_FUN_03f5d7b8(lVar5 + 0x6e8);
                                                      lVar5 = *(long *)(*(long *)(DAT_09188148 +
                                                                                 0xb8) + 8);
                                                      if (lVar5 != 0) {
                                                        if (*(uint *)(lVar5 + 0x18) < 0xdb)
                                                        goto LAB_07384b84;
                                                        *(undefined8 *)(lVar5 + 0x6f0) =
                                                             DAT_09223598;
                                                        thunk_FUN_03f5d7b8(lVar5 + 0x6f0);
                                                        lVar5 = *(long *)(*(long *)(DAT_09188148 +
                                                                                   0xb8) + 8);
                                                        if (lVar5 != 0) {
                                                          if (*(uint *)(lVar5 + 0x18) < 0xdc)
                                                          goto LAB_07384b84;
                                                          *(undefined8 *)(lVar5 + 0x6f8) =
                                                               DAT_092235a0;
                                                          thunk_FUN_03f5d7b8(lVar5 + 0x6f8);
                                                          lVar5 = *(long *)(*(long *)(DAT_09188148 +
                                                                                     0xb8) + 8);
                                                          if (lVar5 != 0) {
                                                            if (*(uint *)(lVar5 + 0x18) < 0xdd)
                                                            goto LAB_07384b84;
                                                            *(undefined8 *)(lVar5 + 0x700) =
                                                                 DAT_092179d8;
                                                            thunk_FUN_03f5d7b8(lVar5 + 0x700);
                                                            lVar5 = *(long *)(*(long *)(DAT_09188148
                                                                                       + 0xb8) + 8);
                                                            if (lVar5 != 0) {
                                                              if (*(uint *)(lVar5 + 0x18) < 0xde)
                                                              goto LAB_07384b84;
                                                              *(undefined8 *)(lVar5 + 0x708) =
                                                                   DAT_092179e0;
                                                              thunk_FUN_03f5d7b8(lVar5 + 0x708);
                                                              lVar5 = *(long *)(*(long *)(
                                                  DAT_09188148 + 0xb8) + 8);
                                                  if (lVar5 != 0) {
                                                    if (*(uint *)(lVar5 + 0x18) < 0xdf)
                                                    goto LAB_07384b84;
                                                    *(undefined8 *)(lVar5 + 0x710) = DAT_0921f0f8;
                                                    thunk_FUN_03f5d7b8(lVar5 + 0x710);
                                                    lVar5 = *(long *)(*(long *)(DAT_09188148 + 0xb8)
                                                                     + 8);
                                                    if (lVar5 != 0) {
                                                      if (*(uint *)(lVar5 + 0x18) < 0xe0)
                                                      goto LAB_07384b84;
                                                      *(undefined8 *)(lVar5 + 0x718) = DAT_0921f100;
                                                      thunk_FUN_03f5d7b8(lVar5 + 0x718);
                                                      lVar5 = 0x100;
                                                      lVar3 = 0x720;
                                                      while( true ) {
                                                        lVar4 = **(long **)(DAT_09188148 + 0xb8);
                                                        if (lVar4 == 0) break;
                                                        if ((ulong)*(uint *)(lVar4 + 0x18) <=
                                                            lVar5 - 0x20U) goto LAB_07384b84;
                                                        *(undefined1 *)(lVar4 + lVar5) = 1;
                                                        lVar4 = *(long *)(*(long *)(DAT_09188148 +
                                                                                   0xb8) + 8);
                                                        if (lVar4 == 0) break;
                                                        if ((ulong)*(uint *)(lVar4 + 0x18) <=
                                                            lVar5 - 0x20U) goto LAB_07384b84;
                                                        *(undefined8 *)(lVar4 + lVar3) =
                                                             DAT_0921fb60;
                                                        thunk_FUN_03f5d7b8(lVar4 + lVar3);
                                                        lVar5 = lVar5 + 1;
                                                        lVar3 = lVar3 + 8;
                                                        if (lVar5 == 0x120) {
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
            }
          }
        }
      }
    }
  }
LAB_07384b80:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

